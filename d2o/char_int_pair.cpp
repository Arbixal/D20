/*********************************************************\
* char_int_pair.cpp                                       *
* =================                                       *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 05/07/04                                   *
* Description: A class to create a dynamic linked list of *
*           character-integer pairs                       *
\*********************************************************/
#include "stdafx.h"
#include "char_int_pair.h"
#include "utilities.h"
//#include <cstring>
using namespace std;


/*********************************************************\
* char_int_pair ()                                        *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Description: Default constructor. Sets all values to 0  *
*              and all pointers to NULL                   *
\*********************************************************/
char_int_pair::char_int_pair()
{
	// Set both pointers to NULL
	pair_name=NULL;
	modifier=NULL;
	max_modifier_length=0;
	num_nodes=0;
	parent=NULL;
}

/*********************************************************\
* char_int_pair (char*)                                   *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Parameter 1: A char* corresponding to the new name of   *
*              the char_int_pair                          *
* Description: An initialisation constructor to set the   *
*              pair_name to the value of Parameter 1      *
*              everything else is set to NULL             *
\*********************************************************/
char_int_pair::char_int_pair(char* name)
{
	// Create new dynamic memory for the pair_name
	pair_name = new char[strlen(name)+1];
	// Copy the name into pair_name
	strcpy(pair_name, name);
	modifier=NULL;
	max_modifier_length=0;
	num_nodes=0;
	parent=NULL;
}

/*********************************************************\
* char_int_pair (char_int_pair)                           *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Parameter 1: A char_int_pair with values for the this   *
*              instance of a char_int_pair                *
* Description: An copy constructor to copy all the values *
*              from parameter 1 to this instance.         *
\*********************************************************/
char_int_pair::char_int_pair(const char_int_pair &new_value)
{
	modifier_node* next;
	// Any normal values can be straight copied across
	max_modifier_length = new_value.max_modifier_length;
	num_nodes = new_value.num_nodes;

	// Copy the new values across, allocating space as required
	modifier = NULL;
	next = new_value.modifier;
	for (int i=0; i<new_value.num_nodes; i++)
	{
		modifier_node* new_modifier = new modifier_node;

		new_modifier->value = next->value;
		new_modifier->modifier_name = new char [strlen(next->modifier_name)+1];
		strcpy(new_modifier->modifier_name, next->modifier_name);
		new_modifier->next = modifier;
		modifier = new_modifier;
		next = next->next;
	}

	if (new_value.pair_name != NULL)
	{
		pair_name = new char [strlen(new_value.pair_name)+1];
		strcpy(pair_name, new_value.pair_name);
	}
	else
	{
		pair_name = NULL;
	}
	parent=NULL;
}

/*********************************************************\
* ~char_int_pair ()                                       *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Description: Destructor to remove any dynamic memory    *
*              that has been allocated during the life of *
*              the char_int_pair                          *
\*********************************************************/
char_int_pair::~char_int_pair()
{
	// Remove all of the modifiers from the list
	// then delete pair_name dynamic memory
	reset_modifiers();
	delete [] pair_name;
	parent=NULL;
}

/*********************************************************\
* set_name (char*)                                        *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Parameter 1: A char* corresponding to the new name of   *
*              the char_int_pair                          *
* Description: Sets the pair_name to Parameter 1. For use *
*              mainly after using the default constructor *
*              instead of the initialisation constructor  *
\*********************************************************/
void char_int_pair::set_name(char* name)
{
	// If pair_name already exists, remove it
	if (pair_name != NULL)
		delete [] pair_name;

	// Allocate new space, and copy name into it
	pair_name = new char [strlen(name)+1];
	strcpy(pair_name, name);

	return;
}

/*********************************************************\
* get_total ()                                            *
* ------------------------------------------------------- *
* Created By: Mavis Shaw                                  *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Return Value: The total value of the linked list of     *
*               modifiers                                 *
* Description: The function steps through the linked list *
*              of modifiers and returns the cumulative    *
*              total.                                     *
\*********************************************************/
int char_int_pair::get_total()
{
	modifier_node* temp;
	int total=0;

	// Set temporary pointer to head of list
	temp = modifier;

	// Step through the list cumulatively adding the total
	while(temp != NULL)
	{
      total += temp->value;
		temp = temp->next;
	}

	return total;
}

/*********************************************************\
* char* get_name ()                                       *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Return Value: A char* to the name of the char_int_pair  *
* Description: Returns the name of the char_int_pair for  *
*              comparison or other necessary function     *
\*********************************************************/
char* char_int_pair::get_name()
{
	return pair_name;
}

/*********************************************************\
* int get_explanation_size ()                             *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Return Value: An integer holding the length of the char *
*               array needed to store the explanation     *
* Description: Calculates the amount of dynamic memory    *
*              required to store the modifier explanation *
*              so as to avoid allocating the wrong amount *
\*********************************************************/
int char_int_pair::get_explanation_size()
{
	return (num_nodes * (max_modifier_length + 6))+1;
}

/*********************************************************\
* get_explanation (char*)                                 *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Parameter 1: A char* for writing the explanation to.    *
*              The char* is assumed to be of sufficient   *
*              size                                       *
* Description: Creates a string listing the modifier's    *
*              names followed by sufficient padding, then *
*              a colon, a space, a sign, a two-digit      *
*              number for the value and a new-line char   *
\*********************************************************/
void char_int_pair::get_explanation(char* explanation)
{
	int length_difference=0, explanation_length=0, potential_length=0;
	modifier_node* step;
	char char_value[4];

	// Changed: 23/05/2004 Caleb - Changed the responsibility of creating AND
	// deleting dynamic memory to outside the class
	// Allocate dynamic memory for the explanation
	//char* explanation = new char [(num_nodes * (max_modifier_length + 6))+1];

	// Create an end of string to concatenate on
	explanation[0] = '\0';

	// Step through the list concatenating modifier_names to the explanation
	step = modifier;
	while (step!=NULL)
	{
		// Add the modifier_name to the end of the explanation string
		strcat(explanation, step->modifier_name);
		// Find out the amount of padding needed
		length_difference = max_modifier_length - (int)strlen(step->modifier_name);
		explanation_length = (int)strlen(explanation);
		potential_length = explanation_length+length_difference;
		for (int i=explanation_length;i<potential_length; i++)
		{
			explanation[i] = ' ';
			explanation_length++;
		}
		// Add a '\0' to the end so the string is null terminated
		explanation[explanation_length] = '\0';

		strcat(explanation, ": ");
		int_to_string(step->value, true, 2, char_value);
		strcat(explanation, char_value);
		strcat(explanation, "\n");

		// Added: 21/05/2004 Caleb - Completely forgot about stepping through the list :(
		// Move to the next in the list
		step = step->next;
		//
	}

	return;
}

/*********************************************************\
* add_modifier (char*, int)                               *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Parameter 1: A char* containing the name of the modifier*
*              to be added                                *
* Parameter 2: An integer containing the value of the     *
*              modifier, whether positive or negative     *
* Description: Creates an instance of a modifier_node,    *
*              which is then added to the linked list of  *
*              other modifier_nodes                       *
\*********************************************************/
void char_int_pair::add_modifier(char* modifier_name, int value)
{
	int modifier_length;
	modifier_node *new_modifier;
	modifier_node *step;
	// Remove the modifier if it already exists
	remove_modifier(modifier_name);

	// Allocate space for a new modifier_node and input the values
	new_modifier = new modifier_node;
	new_modifier->next = NULL;
	new_modifier->modifier_name = new char[strlen(modifier_name)+1];
	strcpy(new_modifier->modifier_name, modifier_name);
	new_modifier->value = value;
	num_nodes++;

	// Check if value is greater than max_modifier_length
	modifier_length = (int)strlen(modifier_name);
	if (modifier_length > max_modifier_length)
		max_modifier_length = modifier_length;

	// Check if list is empty or contains something already
	// Added: 27/05/04 Caleb - Add to the tail NOT the head
	step = modifier;

	if (modifier == NULL)
	{
		modifier = new_modifier;
	}
	else
	{
		while (step->next != NULL)
		{
			step = step->next;
		}
		step->next = new_modifier;
	}

	//

	/* Edited: 27/05/04 Caleb
	if (modifier == NULL)
		modifier = new_modifier;
	else
	{
		new_modifier->next = modifier;
		modifier = new_modifier;
	}*/
}

/*********************************************************\
* remove_modifier (char*)                                 *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Parameter 1: A char* containing the name of the modifier*
*              to be removed from the list                *
* Description: Removes a modifier from the linked list by *
*              name                                       *
\*********************************************************/
void char_int_pair::remove_modifier(char* modifier_name)
{
	modifier_node *step;
	modifier_node *remove=NULL;
	int modifier_length;

	// Set step to modifier
	step = modifier;

	// Added: 21/05/2004 Caleb - Check for NULL length list before removing
	if (step == NULL)
	{
		return;
	}
	//

	if (strcmp(step->modifier_name, modifier_name) == 0)
	{
		remove = step;
		modifier = step->next;
	}

	// Step through the list to check the next value's modifier_name
	while ((step->next!=NULL) && (remove==NULL))
	{
		if (strcmp(step->next->modifier_name, modifier_name) == 0)
		{
			// Set the current pointer to point to the node after the target
			remove = step->next;
			step->next = step->next->next;
		}
		else     // Added: 21/05/2004 Caleb - Needed 'else' otherwise while loop would fail
		{
			step = step->next;
		}
	}

	// Delete dynamic memory from the node
	if (remove!=NULL)
	{
		// Added: 27/05/04 Caleb - Solves problem when removing the longest
		// modifier_name
		if (strlen(remove->modifier_name) == (unsigned int)max_modifier_length)
		{
			// Find the next longest modifier_name
			step = modifier;
			max_modifier_length=0;
			while (step!=NULL)
			{
				modifier_length = (int)strlen(step->modifier_name);
				if (modifier_length > max_modifier_length)
				{
					max_modifier_length=modifier_length;
				}
				step = step->next;
			}
		}
		//

		delete [] remove->modifier_name;
		delete remove;
		num_nodes--;
	}
}

/*********************************************************\
* reset_modifiers ()                                      *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Description: Removes all modifier_nodes from the linked *
*              list                                       *
\*********************************************************/
void char_int_pair::reset_modifiers()
{
	modifier_node *remove;

	// Step through the list
	while (modifier!=NULL)
	{
		// Remove the node from the head
		remove = modifier;
		modifier = modifier->next;

		// Delete the dynamic memory
		delete [] remove->modifier_name;
		delete remove;
	}

	num_nodes=0;
	max_modifier_length=0;

}

/*********************************************************\
* int get_modifier (char*)                                *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Return Value: An integer containing the value of the    *
*               modifier matching the name of Parameter 1 *
* Parameter 1: A char* containing the name of the modifier*
*              for which value is requested               *
* Description: Returns the value of a specific modifier   *
*              which matches the name given by Parameter 1*
\*********************************************************/
int char_int_pair::get_modifier(char* modifier_name)
{
	modifier_node *find;

	// Set find to the head of the list
	find = modifier;

	// Modifier is special value
	if (strcmp(modifier_name, "Modifier") == 0)
	{
		int modifier_value = get_modifier("Base Value");
		if (modifier_value > 0)
			return (modifier_value/2)-5;
		else
			return 0;
	}

	// Step through the list
	while (find != NULL)
	{
		// If the current node matches the modifier_name return the value
		if (strcmp(find->modifier_name, modifier_name) == 0)
			return find->value;
		find = find->next;
	}
	// The modifier_name was not found
	return 0;
}

/*********************************************************\
* set_modifier (char*, int)                               *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Parameter 1: A char* containing the name of the modifier*
*              for which the value must change            *
* Parameter 2: An integer expressing the new value for the*
*              modifier                                   *
* Description: Changes the value of a modifier which      *
*              matches the name of Parameter 1, to the    *
*              value passed as Parameter 2                *
\*********************************************************/
void char_int_pair::set_modifier(char* modifier_name, int value)
{
	modifier_node *find;

	// Set the pointer to the head of the list
	find = modifier;

	// Step through the list
	while (find != NULL)
	{
		// If the current node matches the modifier_name set the value
		// to the value passed to the function
		if (strcmp(find->modifier_name, modifier_name) == 0)
		{
			find->value = value;
			return;
		}
		find = find->next;
	}

	// Wasn't found
	add_modifier(modifier_name, value);
}

/*********************************************************\
* int operator[] (char*)                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 18/05/04                                   *
* Return Value: An integer containing the value of the    *
*               modifier referred to by Parameter 1       *
* Parameter 1: A char* containing the name of the modifier*
*              in which the value needs to be returned    *
* Description: Basically the same function as above       *
*              get_modifier(char*). The operator[] just   *
*              allows for a nicer interface between them  *
\*********************************************************/
int char_int_pair::operator[] (char* modifier_name)
{
	if (modifier_name[0] == '>')
	{
		return (parent->get_value(modifier_name));
	}

	return get_modifier(modifier_name);
}

/*********************************************************\
* char_int_pair& operator= (char_int_pair)                *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: A char_int_pair equal in all ways to the  *
*               char_int_pair in parameter 1              *
* Parameter 1: A char_int_pair which contains all the new *
*              values for the returned char_int_pair      *
* Description: Allows for assigning a char_int_pair's     *
*              values to another char_int_pair            *
\*********************************************************/
char_int_pair& char_int_pair::operator= (const char_int_pair new_value)
{
	modifier_node* next;

	// Assign all the non-dynamic values
	max_modifier_length = new_value.max_modifier_length;
	num_nodes = new_value.num_nodes;

	// Re-create all the modifiers
	if (modifier != NULL)
		reset_modifiers();
	modifier = NULL;
	next = new_value.modifier;
	for (int i=0; i<new_value.num_nodes; i++)
	{
		modifier_node* new_modifier = new modifier_node;

		new_modifier->value = next->value;
		new_modifier->modifier_name = new char [strlen(next->modifier_name)+1];
		strcpy(new_modifier->modifier_name, next->modifier_name);
		new_modifier->next = modifier;
		modifier = new_modifier;
		next = next->next;
	}

	// Allocate and assign the pair_name
	if (new_value.pair_name != NULL)
	{
		if (pair_name != NULL)
			delete [] pair_name;
		pair_name = new char [strlen(new_value.pair_name)+1];
		strcpy(pair_name, new_value.pair_name);
	}

	return (*this);
}

/*********************************************************\
* bool operator== (char*)                                 *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: A boolean value indicating whether the    *
*               char_int_pair's name is equal to the one  *
*               given in parameter 1                      *
* Parameter 1: A char* giving the name for comparison with*
*              the char_int_pair's pair_name              *
* Description: Allows for easy comparisons with pair_names*
\*********************************************************/
bool char_int_pair::operator== (char* name)
{
	if (strcmp(name, pair_name) == 0)
		return true;

	return false;
}

/*********************************************************\
* bool operator!= (char*)                                 *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: A boolean value indicating whether the    *
*               char_int_pair's name is not equal to the  *
*               one given in parameter 1                  *
* Parameter 1: A char* giving the name for comparison with*
*              the char_int_pair's pair_name              *
* Description: Allows for easy comparisons with pair_names*
\*********************************************************/
bool char_int_pair::operator!= (char* name)
{
	if (strcmp(name, pair_name) != 0)
		return true;

	return false;
}

/*********************************************************\
* bool operator< (char*)                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: A boolean value indicating whether the    *
*               char_int_pair's name is less than the one *
*               given in parameter 1                      *
* Parameter 1: A char* giving the name for comparison with*
*              the char_int_pair's pair_name              *
* Description: Allows for easy comparisons with pair_names*
\*********************************************************/
bool char_int_pair::operator< (char* name)
{
	if (strcmp(pair_name, name) < 0)
		return true;

	return false;
}

/*********************************************************\
* bool operator> (char*)                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: A boolean value indicating whether the    *
*               char_int_pair's name is greater than the  *
*               one given in parameter 1                  *
* Parameter 1: A char* giving the name for comparison with*
*              the char_int_pair's pair_name              *
* Description: Allows for easy comparisons with pair_names*
\*********************************************************/
bool char_int_pair::operator> (char* name)
{
	if (strcmp(pair_name, name) > 0)
		return true;

	return false;
}

/*********************************************************\
* bool operator<= (char*)                                 *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: A boolean value indicating whether the    *
*               char_int_pair's name is less than or      *
*               equal to the one given in parameter 1     *
* Parameter 1: A char* giving the name for comparison with*
*              the char_int_pair's pair_name              *
* Description: Allows for easy comparisons with pair_names*
\*********************************************************/
bool char_int_pair::operator<= (char* name)
{
	if (strcmp(pair_name, name) <= 0)
		return true;

	return false;
}

/*********************************************************\
* bool operator>= (char*)                                 *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 05/07/04                                   *
* Return Value: A boolean value indicating whether the    *
*               char_int_pair's name is greater than or   *
*               equal to the one given in parameter 1     *
* Parameter 1: A char* giving the name for comparison with*
*              the char_int_pair's pair_name              *
* Description: Allows for easy comparisons with pair_names*
\*********************************************************/
bool char_int_pair::operator>= (char* name)
{
	if (strcmp(pair_name, name) >= 0)
		return true;

	return false;
}

void char_int_pair::link_parent(char_int_group* parent_class)
{
	parent = parent_class;
}

void char_int_pair::increment_modifier(char* modifier_name)
{
	modifier_node *find;

	// Set find to the head of the list
	find = modifier;

	// Step through the list
	while (find != NULL)
	{
		// If the current node matches the modifier_name return the value
		if (strcmp(find->modifier_name, modifier_name) == 0)
		{
			find->value++;
			return;
		}
		find = find->next;
	}
	// The modifier_name was not found
	add_modifier(modifier_name, 1);

	return;
}

void char_int_pair::decrement_modifier(char* modifier_name)
{
	modifier_node *find;

	// Set find to the head of the list
	find = modifier;

	// Step through the list
	while (find != NULL)
	{
		// If the current node matches the modifier_name return the value
		if (strcmp(find->modifier_name, modifier_name) == 0)
		{
			find->value--;
			return;
		}
		find = find->next;
	}
	// The modifier_name was not found
	add_modifier(modifier_name, -1);
	return;
}


vector<pair<char*,int> > char_int_pair::get_vec()
{
vector<pair<char*,int> > allvalue;
modifier_node* next;
next = modifier;
pair<char*,int>* current;
	for (int i=0; i<num_nodes; i++)
	{
		current = new pair<char*,int>;
		current->first = next->modifier_name;
		current->second = next->value;
		allvalue.push_back(*current);
		next = next->next;
	}
	return allvalue;
}
