/*********************************************************\
* spell.cpp                                                 *
* ===============                                         *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 05/10/04                                   *
* Description: A class to store information about         *
*                     character spells                    *
\*********************************************************/

//#include <iostream>
//#include <iomanip>
//#include <string.h>
#include "stdafx.h"
using namespace std;

#include "spell.h"

Spell::Spell()		// Default constructor
{
	name = NULL;
	type = NULL;
	school = NULL;
}

Spell::Spell(char* s_name, char* s_type, char* s_school)
{
	strcpy(name, s_name);
	strcpy(type, s_type);
	strcpy(school, s_school);
}

Spell::~Spell()		// Destructor
{
	if(name != NULL)
		delete [] name;
	if(type != NULL)
		delete [] type;
	if(school != NULL)
		delete [] school;
}

void Spell::set_name(char* s_name)		// Set values
{
	if(name != NULL)
		delete [] name;

	name = new char[strlen(s_name)+1];
	
	strcpy(name, s_name);
}

void Spell::set_type(char* s_type)
{
	if(type != NULL)
		delete [] type;

	type = new char[strlen(s_type)+1];
	
	strcpy(type, s_type);
}

void Spell::set_school(char* s_school)
{
	if(school != NULL)
		delete [] school;

	school = new char[strlen(s_school)+1];
	
	strcpy(school, s_school);
}

char* Spell::get_name()			// Retrieve values
{
	return name;
}

char* Spell::get_type()
{
	return type;
}

char* Spell::get_school()
{
	return school;
}
