/*********************************************************\
* physical.cpp                                            *
* ============                                            *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 21/05/04                                   *
* Description: Functions to manipulate the characters     *
*           physical characteristics                      *
\*********************************************************/

//#include <cstring>
//#include <iostream>
//#include <fstream>
#include "stdafx.h"
#include "physical.h"
//#include "newCharacter.h"
using namespace std;

physical::physical() // Default constructor
{
	char_name = NULL;
	player_name = NULL;
	gender = NULL;
	height = NULL;
	weight = NULL;
	hair = NULL;
	eyes = NULL;
	skin = NULL;
	age = NULL;
	god = NULL;
	alignment = NULL;
}

physical::~physical() // Destructor
{
	if (char_name != NULL)
		delete [] char_name;
	if (player_name != NULL)
		delete [] player_name;
	if (gender != NULL)
		delete [] gender;
	if (height != NULL)
		delete [] height;
	if (weight != NULL)
		delete [] weight;
	if (hair != NULL)
		delete [] hair;
	if (eyes != NULL)
		delete [] eyes;
	if (skin != NULL)
		delete [] skin;
	if (age != NULL)
		delete [] age;
	if (god != NULL)
		delete [] god;
	if (alignment != NULL)
		delete [] alignment;
}

void physical::set_char_name(char* c_name)
{
	if(char_name != NULL)
		delete [] char_name;

    char_name = new char[strlen(c_name)+1];

    strcpy(char_name, c_name);
}

void physical::set_player_name(char* new_player_name)
{
    if(player_name != NULL)
        delete [] player_name;

    player_name = new char[strlen(new_player_name)+1];

    strcpy(player_name, new_player_name);
}

void physical::set_height(char* new_height)
{
    if(height != NULL)
        delete [] height;

    height = new char[strlen(new_height)+1];

    strcpy(height, new_height);
}

void physical::set_gender(char* new_gender)
{
    if(gender != NULL)
	delete [] gender;

    gender = new char[strlen(new_gender)+1];

    strcpy(gender, new_gender);
}

void physical::set_weight(char* new_weight)
{
    if(weight != NULL)
        delete [] weight;

    weight = new char[strlen(new_weight)+1];

    strcpy(weight, new_weight);
}

void physical::set_hair(char* new_hair)
{
    if(hair != NULL)
        delete [] hair;

    hair = new char[strlen(new_hair)+1];

    strcpy(hair, new_hair);
}

void physical::set_eyes(char* new_eyes)
{
    if(eyes != NULL)
        delete [] eyes;

    eyes = new char[strlen(new_eyes)+1];

    strcpy(eyes, new_eyes);
}

void physical::set_skin(char* new_skin)
{
    if(skin != NULL)
        delete [] skin;

    skin = new char[strlen(new_skin)+1];

    strcpy(skin, new_skin);
}

void physical::set_age(char* new_age)
{
    if(age != NULL)
        delete [] age;

    age = new char[strlen(new_age)+1];

    strcpy(age, new_age);
}

void physical::set_god(char* new_god)
{
    if(god != NULL)
        delete [] god;

    god = new char[strlen(new_god)+1];

    strcpy(god, new_god);
}

void physical::set_alignment(char* new_align)
{
    if(alignment != NULL)
        delete [] alignment;

    alignment = new char[strlen(new_align)+1];

    strcpy(alignment, new_align);
}

char* physical::get_char_name()
{
	return char_name;
}

char* physical::get_player_name()
{
	return player_name;
}

char* physical::get_gender()
{
        return gender;
}

char* physical::get_height()
{
	return height;
}

char* physical::get_weight()
{
	return weight;
}

char* physical::get_hair()
{
	return hair;
}

char* physical::get_eyes()
{
	return eyes;
}

char* physical::get_skin()
{
	return skin;
}

char* physical::get_age()
{
	return age;
}

char* physical::get_god()
{
	return god;
}

char* physical::get_alignment()
{
	return alignment;
}

void physical::save_character(char* filename)
{
	char* temp = NULL;
	char null_string[] = "";

	ofstream outFile;
	outFile.open(filename);

	if(!outFile)
	{
		//cerr << "Error opening " << filename << endl;
		return;
	}

	if (get_char_name() != NULL)
	{
		temp = new char[strlen(get_char_name())+1];
		strcpy(temp, get_char_name());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_player_name() != NULL)
	{
		temp = new char[strlen(get_player_name())+1];
		strcpy(temp, get_player_name());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_gender() != NULL)
	{
		temp = new char[strlen(get_gender())+1];
		strcpy(temp, get_gender());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_height() != NULL)
	{
		temp = new char[strlen(get_height())+1];
		strcpy(temp, get_height());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_weight() != NULL)
	{
		temp = new char[strlen(get_weight())+1];
		strcpy(temp, get_weight());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_hair() != NULL)
	{
		temp = new char[strlen(get_hair())+1];
		strcpy(temp, get_hair());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_eyes() != NULL)
	{
		temp = new char[strlen(get_eyes())+1];
		strcpy(temp, get_eyes());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_skin() != NULL)
	{
		temp = new char[strlen(get_skin())+1];
		strcpy(temp, get_skin());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_age() != NULL)
	{
		temp = new char[strlen(get_age())+1];
		strcpy(temp, get_age());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_god() != NULL)
	{
		temp = new char[strlen(get_god())+1];
		strcpy(temp, get_god());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << ":";
	delete [] temp;

	if (get_alignment() != NULL)
	{
		temp = new char[strlen(get_alignment())+1];
		strcpy(temp, get_alignment());
	}
	else
	{
		temp = new char[2];
		strcpy(temp, null_string);
	}
	outFile << temp << endl;
	delete [] temp;



	outFile.close();
}
