#include "stdafx.h"
#include "class_list.h"
#include "char_class.h"
#include "modifier_node.h"

using namespace std;

class_list::class_list()
{
	head = NULL;
	end = NULL;
	parent = NULL;
	count = 0;
	solid = 0;
}

class_list::~class_list()
{
	clear_list();
}

void class_list::clear_list()
{
	list_node<char_class*>* current;
    
	while (head != NULL)
	{
		current = head;
		head = head->next;
		delete current->node_value;
		delete current;
	}
	head = NULL;
	end = NULL;
	count = 0;
	solid = 0;
}

void class_list::link_parent(profile* new_parent)
{
	parent = new_parent;
}

int class_list::get_num_classes()
{
	return count;
}

int class_list::get_num_solid()
{
	return solid;
}

char* class_list::get_class(int position)
{
	list_node<char_class*>* current;
	int current_count=0;

	current = head;

	while ((current!= NULL) && (current_count != position))
	{
		current_count++;
		current = current->next;
	}

	return (current->node_value->get_name());
}

char_class* class_list::get_pointer(int position)
{
	list_node<char_class*>* current;
	int current_count=0;

	current = head;

	while ((current!= NULL) && (current_count != position))
	{
		current_count++;
		current = current->next;
	}

	return (current->node_value);
}

char_class* class_list::get_pointer(char* name)
{
	list_node<char_class*>* current;
	bool found=false;

	current = head;

	while (current!= NULL)
	{
		if (strcmp(name, current->node_value->get_name()) == 0)
			return current->node_value;
		current = current->next;
	}

	return NULL;
}

void class_list::add_class(char_class* new_class)
{
	list_node<char_class*>* new_char_class = new list_node<char_class*>;
	new_char_class->node_value = new_class;
	new_char_class->next = NULL;

	if (head == NULL)
	{
		head = new_char_class;
		end = new_char_class;
	}
	else
	{
		end->next = new_char_class;
		end = new_char_class;
	}
	count++;
}

int class_list::get_total_level()
{
	return count;
}

char_class* class_list::get_head()
{
	return head->node_value;
}

char_class* class_list::get_tail()
{
	return end->node_value;
}

int class_list::get_num_specific_class(char* name)
{
	list_node<char_class*>* current;
	int class_count = 0;

	current = head;

	while (current != NULL)
	{
		if (strcmp(name, current->node_value->get_name()) == 0)
			class_count++;
		current = current->next;
	}

	return class_count;
}

void class_list::solidify()
{
	solid = count;
}

void class_list::remove_from_tail()
{
	list_node<char_class*>* current;

	if (count > solid)
	{
		current = head;
		if (current->next == NULL)
		{
			delete head->node_value;
			delete head;
			head = NULL;
			end = NULL;
		}
		else
		{
			while (current->next != end)
			{
				current = current->next;
			}
			delete end->node_value;
			delete end;
			end = current;
		}
		count--;
	}
}

bool class_list::is_solid()
{
	return (solid == count);
}

int class_list::get_num_unique()
{
	char_class* current;
	list_node<char*>* current_class_list=NULL;
	list_node<char*>* current_class_pointer;
	int class_count=0;

	for (int i=0;i<solid;i++)
	{
		current = get_pointer(i);
		bool found=false;
		current_class_pointer = current_class_list;
		while (current_class_pointer != NULL)
		{
			if (strcmp(current_class_pointer->node_value, current->get_name()) == 0)
				found=true;
			current_class_pointer = current_class_pointer->next;
		}
		if (found == false)
		{
			list_node<char*>* new_class = new list_node<char*>;
			new_class->node_value = new char [strlen(current->get_name())+1];
			strcpy(new_class->node_value, current->get_name());
			class_count++;
		}
	}

	while (current_class_list != NULL)
	{	
		current_class_pointer = current_class_list;
		current_class_list = current_class_list->next;
		delete [] current_class_pointer->node_value;
		delete current_class_pointer;
	}
	
	return class_count;
}

char* class_list::get_unique_class(int position)
{
	char_class* current;
	list_node<char*>* current_class_list=NULL;
	list_node<char*>* current_class_pointer;
	int class_count=0;

	for (int i=0;i<solid;i++)
	{
		current = get_pointer(i);
		bool found=true;
		current_class_pointer = current_class_list;
		while (current_class_pointer != NULL)
		{
			if (strcmp(current_class_pointer->node_value, current->get_name()) == 0)
				found=false;
			current_class_pointer = current_class_pointer->next;
		}
		if (found == false)
		{
			list_node<char*>* new_class = new list_node<char*>;
			new_class->node_value = new char [strlen(current->get_name())+1];
			strcpy(new_class->node_value, current->get_name());
			class_count++;
			if (class_count == position)
			{
				while (current_class_list != NULL)
				{	
					current_class_pointer = current_class_list;
					current_class_list = current_class_list->next;
					delete [] current_class_pointer->node_value;
					delete current_class_pointer;
				}
				return current->get_name();
			}
		}
	}
	
	while (current_class_list != NULL)
	{	
		current_class_pointer = current_class_list;
		current_class_list = current_class_list->next;
		delete [] current_class_pointer->node_value;
		delete current_class_pointer;
	}

	return end->node_value->get_name();
}
