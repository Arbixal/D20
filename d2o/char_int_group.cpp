/*********************************************************\
* char_int_group.cpp                                      *
* ==================                                      *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 07/09/04                                   *
* Description: A class to create a dynamic linked list of *
*           character-integer pairs                       *
\*********************************************************/
//#include <fstream>
//#include <iostream>
//#include <cstring>
#include "stdafx.h"
#include "char_int_group.h"
#include "utilities.h"
using namespace std;


/*********************************************************\
* char_int_group()                                        *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 29/05/04                                   *
* Description: Default constructor which sets all pointers*
*              to NULL                                    *
\*********************************************************/
char_int_group::char_int_group()
{
	group_name=NULL;
	dynamic_pairs=NULL;
	parent = NULL;
	num_pairs=0;
}

/*********************************************************\
* char_int_group(char*)                                   *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 29/05/04                                   *
* Parameter 1: A character array holding the name of the  *
*              file that contains the definition of the   *
*              group                                      *
* Description: Initialisation constructor which calls the *
*              read_file function, passing the name of    *
*              the file.                                  *
\*********************************************************/
char_int_group::char_int_group(char* filename)
{
	parent = NULL;
	read_file(filename);
}

/*********************************************************\
* char_int_group(profile*)                                *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Parameter 1: A profile pointer that points to the class *
*              in which the instance of this class was    *
*              declared                                   *
* Description: Initialisation constructor which sets the  *
*              parent variable to point to the parent     *
*              class                                      *
\*********************************************************/
char_int_group::char_int_group(profile* overall)
{
	parent = overall;
	group_name = NULL;
	dynamic_pairs = NULL;
	num_pairs = 0;
}

/*********************************************************\
* ~char_int_group()                                       *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 29/05/04                                   *
* Description: Destructor to remove all dynamic memory    *
*              before the program closes                  *
\*********************************************************/
char_int_group::~char_int_group()
{
	delete [] group_name;
	delete [] dynamic_pairs;
}

/*********************************************************\
* void read_file(char*)                                   *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: void                                      *
* Parameter 1: A character array holding the name of the  *
*              file that contains the definition of the   *
*              group                                      *
* Description: This function takes a file specified by    *
*              parameter 1, then allocates memory for and *
*              fills the dynamic pair array with the data *
\*********************************************************/
void char_int_group::read_file(char* filename)
{
	ifstream group_definition;
	int number_pairs=0, name_length=0;
#ifdef UNIX
	int num_carriage_chars=1;
#else
	int num_carriage_chars=2;
#endif
	long* index_array=NULL;

	// Open the given file name
	group_definition.open(filename);

	// Error loading file
	if (group_definition.bad() || group_definition.fail() || group_definition.eof())
	{
		group_name=NULL;
		dynamic_pairs=NULL;
		num_pairs=0;
		return;
	}

	// Read heading info
	//group_definition>>number_pairs;
	number_pairs = create_index_array(index_array, filename, '\n');
	num_pairs = number_pairs;
	//group_definition>>name_length;
	//group_definition.ignore();

	name_length = (int)strcspn(filename, ".");
	group_name = new char[name_length+1];
	//group_definition.getline(group_name, name_length+1);
	strncpy(group_name, filename, name_length);
	group_name[name_length] = '\0';

	// Allocate memory for dynamic pairs
	dynamic_pairs = new char_int_pair[number_pairs];

	// Read in all the pairs
	name_length=0;
	char* pair_name;

	for (int pair_count=0; pair_count<number_pairs; pair_count++)
	{
		//group_definition>>name_length;
		//group_definition.ignore();
		if ((pair_count+1) == number_pairs)
		{
			num_carriage_chars = 0;
		}
		name_length = index_array[pair_count+1] - index_array[pair_count] - num_carriage_chars;
		pair_name = new char [name_length+1];
		group_definition.getline(pair_name, name_length+1);
		dynamic_pairs[pair_count].set_name(pair_name);
		dynamic_pairs[pair_count].link_parent(this);

		delete [] pair_name;
	}

	group_definition.close();

	// Added: 29/08/04 Caleb - Coz I'm stupid and it took me hours to find this leak
	// Delete dynamic memory from index array
	delete [] index_array;
	//

	// Added: 05/07/04 Caleb - To allow for a binary search instead of an iterative search
	group_quick_sort(dynamic_pairs, number_pairs);
	//
}

/*********************************************************\
* void link_parent(profile*)                              *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Parameter 1: A profile pointer that points to the class *
*              in which the instance of this class was    *
*              declared                                   *
* Description: Initialisation constructor which sets the  *
*              parent variable to point to the parent     *
*              class                                      *
\*********************************************************/
void char_int_group::link_parent(profile* overall)
{
	parent = overall;

	return;
}

/*********************************************************\
* int get_num_pairs ()                                    *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 15/08/04                                   *
* Return Value: An integer containing the number of       *
*               dynamic pairs                             *
* Description: This function returns the number of        *
*              dynamic pairs in the dynamic group.        *
\*********************************************************/
int char_int_group::get_num_pairs()
{
	return num_pairs;
}

/*********************************************************\
* int operator[] (char*)                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 29/05/04                                   *
* Return Value: An integer containing the value requested *
*               by parameter 1                            *
* Parameter 1: A character array containing a reference   *
*              to one of the char_int_pair's and up to    *
*              one of the modifier's belonging to that    *
*              pair.                                      *
* Description: This function takes a character array and  *
*              uses that reference to find the specified  *
*              value. If the reference is only to the     *
*              pair, the return value will be the total,  *
*              else the value of the modifier specified   *
\*********************************************************/
int char_int_group::operator[] (char* pair_name)
{
	char* temp_string;
	char* stop_string;
	int pair_name_length=0, value_int;
	int upper_bound = num_pairs+1;
	int lower_bound = 0;

	if (num_pairs == 0)
	{
		return 0;
	}

	value_int = (int)strtod(pair_name, &stop_string);
	if (stop_string == pair_name+strlen(pair_name))
	{
		return value_int;
	}

	// Check the first part of the string
	if (pair_name[0] == '>')
	{
		return 0;
	}
	else
	{
		temp_string = pair_name;
	}

	// Find where the '>' character occurs next
	pair_name_length=(int)strcspn(temp_string, ">\n");

	// Check all the dynamic pairs for a match

	// Binary search
	while (upper_bound != lower_bound)
	{
		int new_index = lower_bound + ((upper_bound - lower_bound)/2);
		int comparison = strncmp(dynamic_pairs[new_index].get_name(), temp_string, pair_name_length);

		if (comparison == 0)
		{
			if ((unsigned int)pair_name_length == strlen(temp_string))
			{
				return dynamic_pairs[new_index].get_total();
			}
			else
			{
				return dynamic_pairs[new_index][temp_string+pair_name_length+1];
			}
		}
		else if (comparison > 0)
		{
			upper_bound = new_index;
		}
		else if (comparison < 0)
		{
			lower_bound = new_index;
		}
	}

	// Old style search
	/*for (int pair_count=0; pair_count<num_pairs; pair_count++)
	{
		if (strncmp(dynamic_pairs[pair_count].get_name(), temp_string, pair_name_length) == 0)
		{
			if ((unsigned int)pair_name_length == strlen(temp_string))
			{
				return dynamic_pairs[pair_count].get_total();
			}
			else
			{
				return dynamic_pairs[pair_count][temp_string+pair_name_length+1];
			}
		}
	}*/

	// If all else fails return an invalid value
	return 0;
}

/*********************************************************\
* int operator[] (int)                                    *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 29/05/04                                   *
* Return Value: An integer containing the total value for *
*               the char_int_pair at the position in the  *
*               array specified by parameter 1            *
* Parameter 1: An integer specifying the position in the  *
*              array to be returned                       *
* Description: This function returns the total value of   *
*              the char_int_pair in the array at the      *
*              position specified in parameter 1          *
\*********************************************************/
int char_int_group::operator[] (int pair_number)
{
	if (num_pairs != 0)
	{
		return dynamic_pairs[pair_number].get_total();
	}
	else
	{
		return 0;
	}
}

/*********************************************************\
* char_int_pair* operator() (char*)                       *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 29/05/04                                   *
* Return Value: A pointer to the char_int_pair referred   *
*               to by parameter 1                         *
* Parameter 1: A character array specifying the name of   *
*              the char_int_pair in question              *
* Description: This function returns a pointer to one of  *
*              the char_int_pairs in the array. This is   *
*              done to allow reference to the functions   *
*              available to char_int_pair's.              *
\*********************************************************/
char_int_pair* char_int_group::operator() (char* pair_name)
{
	int upper_bound = num_pairs;
	int lower_bound = 0;
	
	if (num_pairs == 0)
	{
		return NULL;
	}

	// Find the correct char_int_pair

	// Binary Search
	while (upper_bound != lower_bound)
	{
		int new_index = lower_bound + ((upper_bound-lower_bound) / 2);
		if (dynamic_pairs[new_index] == pair_name)
		{
			return dynamic_pairs+new_index;
		}
		else if (dynamic_pairs[new_index] > pair_name)
		{
			upper_bound = new_index;
		}
		else if (dynamic_pairs[new_index] < pair_name)
		{
			lower_bound = new_index;
		}
	}
	
	// Old style search
	/*for (int pair_count=0; pair_count<num_pairs; pair_count++)
	{
		if (dynamic_pairs[pair_count] == pair_name)
		{
			return dynamic_pairs+pair_count;
		}
	}*/

	return NULL;
}

/*********************************************************\
* char_int_pair* operator() (int)                         *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 29/05/04                                   *
* Return Value: A pointer to the char_int_pair referred   *
*               to by parameter 1                         *
* Parameter 1: An integer specifying the position in the  *
*              array that needs to be returned            *
* Description: This is the same as the function above but *
*              using an integer instead of a char* to     *
*              distinguish the correct pair               *
\*********************************************************/
char_int_pair* char_int_group::operator() (int pair_number)
{
	if (num_pairs != 0)
	{
		return dynamic_pairs+pair_number;
	}
	else
	{
		return 0;
	}
}

// Edited out 29/06/2004 Caleb
/*void char_int_group::add_modifier(char* pair_name, int value)
{
	char* temp_string;
	int pair_name_length=0;

	// Check the first character of the string
	if (pair_name[0] == '>')
	{
		return;
	}
	else
	{
		temp_string = pair_name;
	}

	// Find the end of the pair name
	pair_name_length=strcspn(temp_string, ">\n");

	for (int pair_count=0; pair_count<num_pairs; pair_count++)
	{
		// Find the correct char_int_pair
		if (strncmp(dynamic_pairs[pair_count].get_name(), temp_string, pair_name_length) == 0)
		{
			// Check if a modifier name was given else it can't be added
			if ((unsigned int)pair_name_length != strlen(temp_string))
			{
				dynamic_pairs[pair_count].add_modifier(temp_string+pair_name_length+1, value);
			}
			return;
		}
	}
	return;
}*/

/*********************************************************\
* void apply_modifiers()                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 29/05/04                                   *
* Return Value: void                                      *
* Description: This function opens a file for the group   *
*              which contains modifiers to be manipulated *
*              The file is assumed to be the name of the  *
*              group followed by the extension ".ddm". If *
*              this is not the case then the function     *
*              will not continue but the program will     *
*              continue as normal                         *
\*********************************************************/
void char_int_group::apply_modifiers()
{
	ifstream modifiers;
	long* index_array=NULL;
	int number_lines=0;
	char* file_name = new char [strlen(group_name) + 5];

	// Create file name
	strcpy(file_name, group_name);
	strcat(file_name, ".ddm");

	// Open the file and check for errors
	modifiers.open(file_name);

	if (modifiers.bad() || modifiers.fail() || modifiers.eof())
	{
		//cerr << "Can't load file \"" << file_name << "\"" << endl;
		return;
	}

	// Generate index array
	number_lines = create_index_array(index_array, file_name, '\n');

	// Read in a line at a time for processing
	for (int modifier_number=0; modifier_number<number_lines; modifier_number++)
	{
		char* line_string;
		char* identifier;
		char* value;
		char* last_seperator;
		bool meets_requirements=true;
		int line_length=0, identifier_length=0, value_length=0;

		line_length = index_array[modifier_number+1] - index_array[modifier_number];
		line_string = new char [line_length+1];
		modifiers.getline(line_string, line_length+1);

		// Process the requirements
		last_seperator = line_string;
		do
		{
			// Get the required name
			identifier_length = (int)strcspn(last_seperator, "[");
			identifier = new char [identifier_length+1];
			strncpy(identifier, last_seperator, identifier_length);
			identifier[identifier_length] = '\0';

			// Get the required value
			value_length = (int)strcspn(last_seperator+identifier_length+1, "]");
			value = new char [value_length+1];
			strncpy(value, last_seperator+identifier_length+1, value_length);
			value[value_length] = '\0';

			// Check if it meets the requirements
			if ((*this)[identifier] < (*this)[value])
			{
				meets_requirements = false;
			}

			// Delete dynamic memory
			delete [] identifier;
			delete [] value;

			// Increment to the next requirement
			last_seperator = last_seperator+strcspn(last_seperator, ",:")+1;

		} while (*(last_seperator-1) != ':');

		if (meets_requirements)
		{
			char manipulator;
			char* grp_name;
			int group_length;

			do
			{
				// Get the manipulator
				manipulator = last_seperator[0];

				// Get the group name
				group_length = (int)strcspn(last_seperator+1, ">");
				grp_name = new char [group_length+1];
				strncpy(grp_name, last_seperator+1, group_length);
				grp_name[group_length] = '\0';

				// Get the required name
				identifier_length = (int)strcspn(last_seperator+group_length+2, "[");
				identifier = new char [identifier_length+1];
				strncpy(identifier, last_seperator+group_length+2, identifier_length);
				identifier[identifier_length] = '\0';

				// Get the required value
				value_length = (int)strcspn(last_seperator+group_length+identifier_length+3, "]");
				value = new char [value_length+1];
				strncpy(value, last_seperator+group_length+identifier_length+3, value_length);
				value[value_length] = '\0';

				if (manipulator == '+')
				{
					(*this)(grp_name)->add_modifier(identifier, (*this)[value]);
				}
				else if (manipulator == '-')
				{
					(*this)(grp_name)->remove_modifier(identifier);
				}
				else if (manipulator == '=')
				{
					(*this)(grp_name)->set_modifier(identifier, (*this)[value]);
				}

				delete [] identifier;
				delete [] value;
				delete [] grp_name;

				last_seperator = last_seperator+strcspn(last_seperator, ",\0")+1;

			} while (*(last_seperator-1) != '\0');
		}

	}

}

/*********************************************************\
* void group_quick_sort(char_int_pair*, int)              *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: void                                      *
* Parameter 1: A char_int_pair* to the dynamic array to   *
*              be sorted.                                 *
* Parameter 2: An integer containing the length of this   *
*              section of the array to be sorted.         *
* Description: This function uses the quicksort algorithm *
*              to sort all of the pairs into the correct  *
*              order so that a binary search can be used  *
*              to increase the efficiency of the program. *
\*********************************************************/
void char_int_group::group_quick_sort(char_int_pair* pair_array, int length)
{
	int pivot_index, left_partition, right_partition;

	if (length>1)
	{
		group_quick_pivot(pair_array, length, pivot_index);

		left_partition = pivot_index;
		right_partition = length - left_partition - 1;

		group_quick_sort(pair_array, left_partition);
		group_quick_sort(pair_array+pivot_index+1, right_partition);
	}
	return;
}

/*********************************************************\
* void group_quick_pivot(char_int_pair*, int, int&)       *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: void                                      *
* Parameter 1: A char_int_pair* to the dynamic array in   *
*              which to determine the pivot.              *
* Parameter 2: An integer containing the length of this   *
*              portion of the array.                      *
* Parameter 3: An integer passed by reference containing  *
*              the pivot point.                           *
* Description: This function is the pivot portion of the  *
*              quicksort method used above.               *
\*********************************************************/
void char_int_group::group_quick_pivot(char_int_pair* pair_array, int length, int &pivot_index)
{
	char_int_pair pivot = pair_array[(length/2)];
	char_int_pair swap;
	int big_index=length-1;
	int small_index=0;

	while (small_index <= big_index)
	{
		while ((small_index < length) && (pivot >= pair_array[small_index].get_name()))
		{
			small_index++;
		}

		while (pivot < pair_array[big_index].get_name())
		{
			big_index--;
		}

		if (small_index < big_index)
		{
			swap = pair_array[small_index];
			pair_array[small_index] = pair_array[big_index];
			pair_array[big_index] = swap;
		}
	}

	pivot_index = big_index;
	if (pair_array[pivot_index] != pivot.get_name())
	{
		pair_array[(length/2)] = pair_array[pivot_index];
		pair_array[pivot_index] = pivot;
	}

	return;
}

void char_int_group::write_to_file(char* filename)
{
	ofstream output_file;
	output_file.open(filename);

	// Check that the file opened correctly
	if (!output_file.good())
		return;

	// Write the group name to the file
	output_file << group_name << endl;

    // Step through each pair outputting it to a new line
	for (int i=0; i<num_pairs; i++)
	{
		// Output the name, number of nodes, and maximum length of the modifier name
		char_int_pair* current = (*this)(i);
		modifier_node* current_modifier=current->modifier;
		output_file << current->get_name() << "(" << current->num_nodes << ")[" << current->max_modifier_length << "]:";
		// Step through each modifier outputting it to the line
		while (current_modifier != NULL)
		{
			output_file << current_modifier->modifier_name << "(" << current_modifier->value << "),";
			current_modifier = current_modifier->next;
		}
		// Output a new line
		output_file << endl;
	}
}

int char_int_group::read_from_file(char* filename)
{
	int number_pairs=0, name_length=0, buffer_length=0;
	long* index_array=NULL;
	char* buffer;
	ifstream input_file;

	// Open the file and check that it opened correctly
	input_file.open(filename);
	if (!input_file.good())
	{
		return 0;
	}

	// Read heading info
	num_pairs = create_index_array(index_array, filename, '\n') - 2;

	// Read the first line
	buffer = new char [index_array[1]];
	input_file.getline(buffer, index_array[1]);

	// Sort out the group name
	name_length = index_array[1]-2;
	if (group_name != NULL)
	{
		delete [] group_name;
	}
	group_name = new char [name_length+1];
	strcpy(group_name, buffer);
	delete [] buffer;

	// Clear the pairs if there are any
	if (dynamic_pairs != NULL)
	{
		delete [] dynamic_pairs;
	}
	
	// Create new pairs
	dynamic_pairs = new char_int_pair [num_pairs];
    
	// Read line by line and input into the group
    for (int i=1; i<=num_pairs; i++)
	{
		// Read the line in
		input_file.seekg(index_array[i], ios::beg);
		buffer_length = index_array[i+1] - index_array[i] - 2;
		buffer = new char [buffer_length+1];
        input_file.getline(buffer, buffer_length+1);
		
		break_down_line(buffer, dynamic_pairs+(i-1));
		dynamic_pairs[i-1].link_parent(this);

		delete [] buffer;
	}

	delete [] index_array;

	return 1;
}

void char_int_group::break_down_line(char* buffer, char_int_pair* position)
{
	int number_nodes=0, name_length=0, max_char_length=0;
	char* pair_name;
	char* num_nodes;
	char* max_chars;
	char* start_modifiers;
	char* modifier_string;
	char* modifier_name;
	char* modifier_value_char;
	char number_string[4];

	// Get the pair name
	name_length = (int)strcspn(buffer, "(");
	pair_name = new char [name_length + 1];
	strncpy(pair_name, buffer, name_length);
	pair_name[name_length]='\0';
	position->set_name(pair_name);
	delete [] pair_name;

	// Get the number of nodes
	num_nodes = buffer+(name_length+1);
	name_length = (int)strcspn(num_nodes, ")");
	strncpy(number_string, num_nodes, name_length);
	number_nodes = atoi(number_string);
	number_string[0] = '\0';

	if (number_nodes > 0)
	{
		// Get the max number of chars in a modifier name
		max_chars = buffer+((int)strcspn(buffer, "[")+1);
		name_length = (int)strcspn(max_chars, "]");
		strncpy(number_string, max_chars, name_length);
		max_char_length = atoi(number_string);
		number_string[0] = '\0';

		// Allocate space for modifier name
		modifier_name = new char [max_char_length+1];

		// Get the start of the modifiers
		start_modifiers = buffer+((int)strcspn(buffer,":")+1);
		modifier_string = start_modifiers;
		for (int i=0; i<number_nodes; i++)
		{
			name_length = (int)strcspn(modifier_string, "(");
			strncpy(modifier_name, modifier_string, name_length);
			modifier_name[name_length] = '\0';
			modifier_value_char = modifier_string+(name_length+1);
			name_length = (int)strcspn(modifier_value_char, ")");
			strncpy(number_string, modifier_value_char, name_length);
			number_string[name_length] = '\0';
			position->add_modifier(modifier_name, atoi(number_string));
			number_string[0] = '\0';
			modifier_string = start_modifiers+((int)strcspn(modifier_string, ",")+1);
		}

		delete [] modifier_name;
	}
}

int char_int_group::get_value(char* name)
{
	return (*this)[name];
}

int char_int_group::get_value(int number)
{
	return (*this)[number];
}

char_int_pair* char_int_group::get_pointer (char* name)
{
	return (*this)(name);
}

char_int_pair* char_int_group::get_pointer (int number)
{
	return (*this)(number);
}
