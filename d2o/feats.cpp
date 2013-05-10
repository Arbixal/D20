/*********************************************************\
* feats.cpp                                               *
* =========                                               *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 06/09/04                                   *
* Description: A class to store and control the feats     *
*              a character has                            *
\*********************************************************/

//#include <cstdlib>
//#include <cstring>
//#include <iostream>
#include "stdafx.h"
#include "feats.h"
using namespace std;

/*********************************************************\
* feat()                                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Description: Default constructor sets everything to NULL*
\*********************************************************/
feat::feat()
{
	effects = NULL;
	name = NULL;
	feat_string = NULL;
}

/*********************************************************\
* feat(char*)                                             *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Parameter 1: A char* containing all the values for the  *
*              feat                                       *
* Description: Initialisation constructor, sets all       *
*              values to those specified in the char*     *
*              passed as Parameter 1                      *
\*********************************************************/
feat::feat(char* description)
{
	effects = NULL;
	name = NULL;
	parent_list = NULL;
	feat_string = NULL;
	use_description(description);
}

/*********************************************************\
* feat(feat_list*)                                        *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Parameter 1: A feat_list * to the list in which this    *
*              instance of feat is defined                *
* Description: A constructor which links to the feat list *
*              containing this instance, and sets all     *
*              other values to NULL                       *
\*********************************************************/
feat::feat(feat_list* parent)
{
	parent_list = parent;
	effects = NULL;
	name = NULL;
	feat_string = NULL;
}

/*********************************************************\
* ~feat()                                                 *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Description: Destructor to clear lists and delete any   *
*              dynamic memory                             *
\*********************************************************/
feat::~feat()
{
	clear_lists();
}

/*********************************************************\
* void use_description(char*)                             *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Parameter 1: A char* containing all the values for the  *
*              feat                                       *
* Description: This function sets all values to those     *
*              specified in the char* passed as Parameter *
*              1                                          *
\*********************************************************/
void feat::use_description(char* description)
{
	char* modifier_string;
	char* modifier_value;
	char* seperators = ":";
	char* temp_string;
	char* close_bracket;
	int modifier_length;
	modifier_node* temp;

	// Copy into feat string
	feat_string = new char [strlen(description)+1];
	strcpy(feat_string, description);

	// Copy description into a temporary variable
	temp_string = new char [strlen(description)+1];
	strcpy(temp_string, description);

	// Get the name from the front of the description
	modifier_string = strtok(temp_string, seperators);
	name = new char [strlen(modifier_string) +1];
	strcpy(name, modifier_string);

    modifier_string = strtok(NULL, seperators);

	while (modifier_string != NULL)
	{
		// Check for an empty string
		if (strlen(modifier_string) != 0)
		{
			// Find the value brackets '[]'
			modifier_value = strchr(modifier_string, '[') + 1;
			modifier_length = (int)(modifier_value-modifier_string);

			// Create new node
			temp = new modifier_node;
			temp->modifier_name = new char [modifier_length];
			strncpy(temp->modifier_name,modifier_string,modifier_length-1);
            temp->modifier_name[modifier_length-1] = '\0';

			// Extract the value
            if (modifier_value[0] == ']')
			{
				// Empty value, give it 0
				temp->value = 0;
			}
			else
			{
				close_bracket = strchr(modifier_value, ']');
				close_bracket[0] = '\0';
				temp->value = atoi(modifier_value);
			}

			// Add to the list
			temp->next = effects;
			effects = temp;
		}

		// Get next token
		modifier_string = strtok(NULL, seperators);
	}

	// Remove temporary string
	delete [] temp_string;

	return;
}

/*********************************************************\
* void apply_modifiers()                                  *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Description: If the parent_list isn't a NULL value      *
*              then the modifiers are sent to this parent *
*              list for processing                        *
\*********************************************************/
void feat::apply_modifiers()
{
	if (parent_list != NULL)
	{
		parent_list->apply_modifiers(effects);
	}

	return;
}

/*********************************************************\
* void clear_lists()                                      *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: void                                      *
* Description: Remove all entries from the lists and      *
*              delete any dynamic memory along the way    *
\*********************************************************/
void feat::clear_lists()
{
	modifier_node* current_modifier = NULL;

	// Clear the name
	delete [] name;

	// Clear the feat string
	delete [] feat_string;

	// Clear the abilities list
    while (effects != NULL)
	{
		current_modifier = effects;
		effects = effects->next;
		delete current_modifier->modifier_name;
		delete current_modifier;
	}

	return;
}

/*********************************************************\
* char* get_name()                                        *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Return Value: A char* to the name of this feat          *
* Description: Returns the name of this feat              *
\*********************************************************/
char* feat::get_name()
{
	return name;
}

char* feat::get_feat_string()
{
	return feat_string;
}
