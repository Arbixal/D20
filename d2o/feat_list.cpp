/*********************************************************\
* feat_list.cpp                                           *
* =============                                           *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 07/09/04                                   *
* Description: A linked list of individual feats so-as to *
*              provide a method for manipulating the list *
\*********************************************************/
//#include <cstdlib>
//#include <iostream>
#include "stdafx.h"
#include "utilities.h"
#include "feat_list.h"
using namespace std;

/*********************************************************\
* feat_list()                                             *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Description: Default constructor which sets all pointers*
*              to NULL                                    *
\*********************************************************/
feat_list::feat_list()
{
	head = NULL;
	end = NULL;
	parent = NULL;
	count=0;
}

/*********************************************************\
* feat_list(profile*)                                     *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Parameter 1: A profile pointer which contains the       *
*              address of the parent class                *
* Description: Set head to NULL and sets a link between   *
*              the parent class and this instance         *
\*********************************************************/
feat_list::feat_list(profile* overall)
{
	head = NULL;
	end = NULL;
	parent = overall;
	count=0;
}

/*********************************************************\
* ~feat_list()                                            *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Description: Destructor, deletes all dynamic memory     *
\*********************************************************/
feat_list::~feat_list()
{
	clear_list();
	count = 0;
}

/*********************************************************\
* link_parent(profile*)                                   *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Parameter 1: A profile pointer which contains the       *
*              address of the parent class                *
* Description: Creates a link between the parent class    *
*              and this instance                          *
\*********************************************************/
void feat_list::link_parent(profile* overall)
{
	parent = overall;
}

/*********************************************************\
* void clear_list()                                       *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Description: Clears the list & deletes dynamic memory   *
\*********************************************************/
void feat_list::clear_list()
{
	list_node<feat*>* current;

	// Clear the list
	while (head != NULL)
	{
		current = head;
		head = head->next;
		delete current->node_value;
		delete current;
	}
	end = NULL;
	count = 0;

	return;
}

/*********************************************************\
* void apply_feats()                                      *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Description: Steps through the list of feats calling    *
*              each feats "apply_modifiers()" function    *
\*********************************************************/
void feat_list::apply_feats()
{
	list_node<feat*>* current;

	// Set current pointer to the head of the list
	current = head;

	// Step through the list applying modifiers as we go
	while (current != NULL)
	{
		current->node_value->apply_modifiers();
		current = current->next;
	}
}

/*********************************************************\
* void apply_modifiers(modifier_node*)                    *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Parameter 1: A modifier_node pointer which is the head  *
*              of a list of modifiers passed from a feat  *
*              in order for the modifiers to take effect  *
* Description: Applies the modifiers from a feat, passing *
*              them further back to the parent class if   *
*              needed, in order to apply bonuses          *
\*********************************************************/
void feat_list::apply_modifiers(modifier_node* modifier_head)
{
	modifier_node* current;

	// Set the current pointer to the head of the modifier list
	current = modifier_head;

	// Step through the list applying any modifiers related to feats
	// and passing all the others back to the profile class
	while (current != NULL)
	{
		//cerr << current->modifier_name << " (" << current->value << ")\n";
		current = current->next;
	}

	return;
}

/*********************************************************\
* void add_feat(char*)                                    *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Parameter 1: A char* containing a line of text that     *
*              holds all the values for the feat to add   *
* Description: Adds a feat defined by Parameter 1 to the  *
*              current list of feats                      *
\*********************************************************/
void feat_list::add_feat(char* description)
{
	list_node<feat*>* temp;

	// Create a new list node
	temp = new list_node<feat*>;
	// Link the new node with this class
	temp->node_value = new feat(this);
	// Allow it to set all its values
	temp->node_value->use_description(description);

	// Add to the tail of the list
    temp->next = NULL;
	if (end != NULL)
		end->next = temp;
	else
		head = temp;
	end = temp;

	count++;

	return;
}

/*********************************************************\
* feat* operator() (int)                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: A pointer to the feat corresponding to    *
*               the number passed as Parameter 1          *
* Parameter 1: An integer indicating the position in the  *
*              list of the requested item                 *
* Description: Returns a pointer to the feat in the list  *
*              which appears at the position given as     *
*              Parameter 1                                *
\*********************************************************/
feat* feat_list::operator() (int feat_number)
{
	int count=0;
	list_node<feat*>* current;

	// If asking for a negative number, give them the head
	if (feat_number < 0)
		feat_number = 0;

	// Set the current pointer to the head of the list
	current = head;

	// Step through the list until required number is met
	while ((current != NULL ) && (count != feat_number))
	{
		current = current->next;
		count++;
	}

	// If passed the end of the list, and still not found
	// return NULL
	// Else return the value stored in the node
	if (current == NULL)
	{
		return NULL;
	}
	else
	{
		return current->node_value;
	}
}

/*********************************************************\
* feat* operator() (char*)                                *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: A pointer to the feat corresponding to    *
*               the number passed as Parameter 1          *
* Parameter 1: A char* indicating the name of the feat    *
*              that is being requested                    *
* Description: Returns a pointer to the feat in the list  *
*              which has the name specified in Parameter  *
*              1                                          *
\*********************************************************/
feat* feat_list::operator() (char* feat_name)
{
	list_node<feat*>* current;
	bool node_found=false;

	// Set current pointer to the head of the list
	current = head;

	// Step through the list until either the feat is found
	// or we reach the end of the list
	while ((current != NULL) && (node_found == false))
	{
		// Check if the current feat matches the specified name
		if (strcmp(feat_name, current->node_value->get_name()) == 0)
		{
			node_found = true;
		}
		else
		{
			// Take next step through list
			current = current->next;
		}
	}

	// If passed the end of the list return NULL
	// else return the value of the node
	if (current == NULL)
	{
		return NULL;
	}
	else
	{
		return current->node_value;
	}
}

/*********************************************************\
* feat* operator() (int)                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: A char* to the name of the feat in the    *
*               position in the list indicated by         *
*               Parameter 1                               *
* Parameter 1: An integer indicating the position in the  *
*              list of the requested item                 *
* Description: Returns a pointer to the name of a feat in *
*              the list which appears at the position     *
*              given as Parameter 1                       *
\*********************************************************/
char* feat_list::operator[] (int feat_number)
{
	// Call the function we implemented above to find the
	// feat
	feat* current = (*this)(feat_number);

	// If it returned NULL, return NULL aswell
	// else return the name of the feat
	if (current == NULL)
	{
		return NULL;
	}
	else
	{
		return current->get_name();
	}
}


void feat_list::write_to_file(char* filename)
{
	ofstream output_file;
	list_node<feat*>* current;

	// Open the file
	output_file.open(filename, ios::trunc);

	// Check for good io
	if (!output_file.good())
	{
		return;
	}

	// Step through the list outputting each feat
	current = head;
	while (current != NULL)
	{
		// Output feat string
		output_file << current->node_value->get_feat_string() << endl;
		current = current->next;
	}
}

int feat_list::read_from_file(char* filename)
{
	ifstream input_file;
	long* file_index;
	int number_records;
	int buffer_length;
	char* buffer;

	// Open the file to read from
	input_file.open(filename);

	// Check for good open
	if (!input_file.good())
	{
		return 0;
	}

	// Clear the current list
	clear_list();

	// Create file index array
	number_records = create_index_array(file_index, filename, '\n');

	// If records exist read them in
	if (number_records > 0)
	{
		for (int i=0; i<number_records; i++)
		{
			// Check length of the line
			buffer_length = file_index[i+1] - file_index[i] - 1;
			if (buffer_length > 0)
			{
				// Allocate space for the buffer
				buffer = new char [buffer_length];
				input_file.getline(buffer, buffer_length);
				// Add to list
				add_feat(buffer);
				delete [] buffer;
			}
		}
	}

	delete [] file_index;
			
	return 1;
}

void feat_list::remove_from_end()
{
	list_node<feat*>* current;

	// Start at the head
	current = head;

	if (head == end)
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
		current->next = NULL;
		end = current;
	}
	count--;
}

int feat_list::get_num_feats()
{
	return count;
}

char* feat_list::get_feat_name(int position)
{
	return (*this)[position];
}

feat* feat_list::get_pointer(int position)
{
	return (*this)(position);
}

feat* feat_list::get_pointer(char* name)
{
	return (*this)(name);
}

void feat_list::remove_feat(char* name)
{
	list_node<feat*>* current = head;
	bool found=false;

	if (strcmp(head->node_value->get_name(), name) == 0)
	{
		head = head->next;
		if (end == current)
			end = head;
		delete current->node_value;
		delete current;
		count--;
	}
	else
	{
		while ((current->next != end) && (found == false))
		{
			current = current->next;
			if (strcmp(current->node_value->get_name(), name) == 0)
			{
				found = true;
			}
		}
		list_node<feat*>* remove = current->next;
		if (end == current->next)
		{
			remove = current->next;
            end = current;			
			current->next = NULL;
		}
		else
		{
			remove = current->next;
			current->next = remove->next;
		}
		delete remove->node_value;
		delete remove;
		count--;
	}
}
