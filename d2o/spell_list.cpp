/*********************************************************\
* spell_list.cpp                                          *
* ===============                                         *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 09/10/04                                   *
* Description: A class to create a dynamic linked list of *
*           character spells                              *
\*********************************************************/

//#include <iostream>
//#include <iomanip>
//#include <string.h>
#include "stdafx.h"
using namespace std;

#include "spell.h"
#include "utilities.h"
#include "spell_list.h"

const int MAX_NAME = 30;

Spell_list::Spell_list()
{
	head = NULL;
	count = 0;
}

Spell_list::~Spell_list()
{
	clear_list();
}

void Spell_list::add_spell(Spell* new_spell)
{
	//char* temp = new char[MAX_NAME];	// temp area for copying storage
	//char select;
	//Spell* list = *spell_list;		// set pointer to start of linked list
	Spell* current;

	new_spell->next = NULL;
	if(head == NULL)		// if list empty, create first node
	{
		head = new_spell;
		//*spell_list = list;
	}
	else	// if not empty, iterate the list until you find the end
	{
		current = head;
		while(current->next != NULL)
			current = current->next;

		current->next = new_spell;
	}
	count++;
	
	/*while(1)
	{
		while(cin.get() != '\n');		// clear buffer

		cout << "Enter name: ";			
		cin.getline(temp, MAX_NAME,'\n');  // retrieve name from console
		head->set_name(temp);				// assign to new value

		cout << "Enter type: ";
		cin.getline(temp, MAX_NAME,'\n');
		head->set_type(temp);

		cout << "Enter school: ";
		cin.getline(temp, MAX_NAME,'\n');
		head->set_school(temp);

		cout << head->get_name() << endl << head->get_type() << endl << head->get_school() << endl;

		cout << "Enter another spell? (y for more): ";
		cin >> select;

		if(select != 'y')	// make last node equal to NULL
		{
			head->next = NULL;
			return;
		}
		else				// if another to be entered, create new
		{
			head->next = new Spell;
			head = head->next;
		}
	}*/
	
	return;
}

/*void Spell_list::print_list()
{
	Spell* current;

	cout << "Spell List" << endl;
	cout << "=========================================" << endl;
	current = head;
	while(current != NULL)		// prints list from start to end
	{
		cout << current->get_name() << ", " << current->get_type() << ", " << current->get_school() << endl;
		current = current->next;
	}

	if (head == NULL)
		cout << "No spells in list." << endl << endl;
	else
		cout << endl;

	return;
}*/

void Spell_list::remove_spell(char* spell_name)
{
	Spell* current;
	Spell* to_delete=NULL;

	current = head;

	if (strcmp(head->get_name(), spell_name) == 0)
	{
		to_delete = head;
		head = head->next;
	}
	else
	{
		while (current->next != NULL)
		{
			if (strcmp(current->next->get_name(), spell_name) == 0)
			{
				to_delete = current->next;
				current->next = to_delete->next;
			}
			else
				current = current->next;
		}
	}

	if (to_delete != NULL)
	{
		delete to_delete;
		count--;
	}

	return;
}

char* Spell_list::operator[](int pos_in_list)		// Overloaded operator
{
	Spell* found = (*this)(pos_in_list);

	if (found != NULL)
        return found->get_name();
	else
		return NULL;
}

Spell* Spell_list::operator()(int pos_in_list)		// Overloaded operator
{
	Spell* current;
	int counter = 0;

	current = head;

	for (int i=0; i<pos_in_list; i++)
	{
		if (current != NULL)
			current = current->next;
	}

	return current;
}

Spell* Spell_list::operator()(char* spell_name)		// Overloaded operator
{
	Spell* current;

	current = head;

	while (current != NULL)
	{
		if (strcmp(current->get_name(), spell_name) == 0)
		{
			return current;
		}
		
		current = current->next;
	}

	return NULL;
}

int Spell_list::write_to_file(char* filename)
{
	ofstream output_file;

	// Open the file
	output_file.open(filename, ios::trunc);

	// Check for correct opening
	if (!output_file.good())
	{
		return 0;
	}

	// Step through list outputting data for each
	Spell* current;

	current = head;

	while (current != NULL)
	{
		output_file << current->get_name() << ":" << current->get_type() << ":" << current->get_school() << ":" << endl;
		current = current->next;
	}
	return 1;
}

int Spell_list::read_from_file(char* filename)
{
	ifstream input_file;
	char* buffer;
	char* temp;
	char* spell_type;
	char* spell_school;
	int temp_length;
	int num_spells=0;
	int buffer_length;
	long* file_index;
	Spell* new_spell;

	// Open the file for input
	input_file.open(filename);

	// Check for good flag
	if (!input_file.good())
	{
		return 0;
	}

	// Get the index
	num_spells = create_index_array(file_index, filename, '\n') -1;

	// Clear the existing list
	clear_list();

	// Read from file line by line
	for (int i=0; i<num_spells;i++)
	{
		buffer_length = file_index[i+1] - file_index[i] - 1;

		if (buffer_length > 0)
		{
			new_spell = new Spell;
			buffer = new char [buffer_length+1];
			input_file.getline(buffer, buffer_length);

			// Find points in the string for substrings
			spell_type = buffer+((int)strcspn(buffer, ":")+1);
			spell_school = spell_type+((int)strcspn(spell_type,":")+1);

			// Copy to temporary char*
			temp_length = (int)strcspn(buffer, ":");
			temp = new char [temp_length + 1];
			strncpy(temp, buffer, temp_length);
			temp[temp_length] = '\0';
			new_spell->set_name(temp);
			delete [] temp;

			temp_length = (int)strcspn(spell_type, ":");
			temp = new char [temp_length+1];
			strncpy(temp, spell_type, temp_length);
			temp[temp_length] = '\0';
			new_spell->set_type(temp);
			delete [] temp;

			temp_length = (int)strcspn(spell_school, ":");
			temp = new char [temp_length+1];
			strncpy(temp, spell_school, temp_length);
			temp[temp_length] = '\0';
			new_spell->set_school(temp);
			delete [] temp;

			// Add the new spell
			add_spell(new_spell);
		}

		delete [] buffer;
	}

	// Delete file_index
	delete [] file_index;

	return 1;
}

void Spell_list::clear_list()
{
	Spell* current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		delete current;
	}
	count = 0;
}

Spell* Spell_list::get_pointer(int position)
{
	return (*this)(position);
}

Spell* Spell_list::get_pointer(char* name)
{
	return (*this)(name);
}

char* Spell_list::get_spell_name(int position)
{
	return (*this)[position];
}

int Spell_list::get_num_spells()
{
	return count;
}

