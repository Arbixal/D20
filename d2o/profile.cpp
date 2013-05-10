/*********************************************************\
* profile.cpp                                             *
* ===========                                             *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 07/09/04                                   *
* Description: The overall class that contains all the    *
*              other classes, and allows communication    *
*              between them all                           *
\*********************************************************/
#pragma unmanaged
//#include <cstdlib>
//#include <iostream>
//#include <ctime>
//using namespace std;
#include "stdafx.h"
#include "profile.h"
using namespace std;

/*********************************************************\
* profile()                                               *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Description: Default constructor which links sub-classes*
*              to this class, and initialises their values*
\*********************************************************/
profile::profile()
{
	initialise();	
}

/*********************************************************\
* ~profile()                                              *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 07/09/04                                   *
* Description: Deconstructor                              *
\*********************************************************/
profile::~profile()
{

}

void profile::create_new_character()
{
	char* name = NULL;
	int temp;
	int selection;

	// Provide random numbers for ability rolls

	// Seed randomizer
	srand((int)time(NULL));
	cout << "The following ability scores were randomly given to you:" << endl;
	temp = abilities->get_num_pairs();
	for (int i=0; i<temp; i++)
	{
		char modifier_name[]="Base Value";
		abilities->get_pointer(i)->add_modifier(modifier_name, get_rand_ability_score(4));
		//cout << abilities->get_pointer(i)->get_name() << ": " << abilities[i] << endl;
	}
	cout << endl;

	// Race
	cout << "Select players race by selecting the appropriate number" << endl;
	cout << "1. Human" << endl;
	cout << "2. Elf" << endl;
	cin >> selection;
	cout << endl;
	
	switch(selection)
	{
		case 1: cout << "You have selected to be a human character" << endl;
				break;
		case 2: cout << "You have selected to be an elven character" << endl;
				break;
		default: cout << "Invalid selection" << endl;
				break;
	}
	
	selection = 0;
	
	// Character Class
	cout << "Select players class by selecting the appropriate number" << endl;
	cout << "1. Ranger" << endl;
	cout << "2. Wizard" << endl;
	cin >> selection;
	while (cin.get() != '\n');
	cout << endl;
	
	switch(selection)
	{
		case 1: cout << "You have selected to be a ranger" << endl;
				break;
		case 2: cout << "You have selected to be a wizard" << endl;
				break;
		default: cout << "Invalid selection" << endl;
				break;
	}

	// Physical Attributes
	create_physical();

	// Skills
	/*for (int j=0;j<skills->get_num_pairs();j++)
	{
		cout << skills(j)->get_name() << ": " << skills[j] << endl;
	}*/

	//save_character();

}

void profile::display_character_stats()
{
	/*
	// Display Physical Details
	cout << "\nPhysical\n===================================================" << endl;
	cout << "Character Name: " << physical_prop->get_char_name() << endl;
	cout << "Players Name: " << physical_prop->get_player_name() << endl;
	cout << "Gender: " << physical_prop->get_gender() << endl;
	cout << "Height: " << physical_prop->get_height() << endl;
	cout << "Weight: " << physical_prop->get_weight() << endl;
	cout << "Hair Colour: " << physical_prop->get_hair() << endl;
	cout << "Eye Colour: " << physical_prop->get_eyes() << endl;
	cout << "Skin Tone: " << physical_prop->get_skin() << endl;
	cout << "Age: " << physical_prop->get_age() << endl;
	cout << "God: " << physical_prop->get_god() << endl;
	cout << "Alignment: " << physical_prop->get_alignment() << endl;


	// Display abilities
	cout << "\nAbilities\n===================================================" << endl;
	for (int i=0; i<abilities->get_num_pairs(); i++)
	{
		cout << abilities->get_pointer(i)->get_name() << ": " << abilities[i] << endl;
	}*/
}

void profile::create_physical()
{
	char* temp;

	temp = new char[128];
	
	cout << endl;
	cout << "Create a new character" << endl;
	cout << "----------------------" << endl;
	cout << endl;

	cout << "Enter characters name: ";
	cin.getline(temp, 128);
	physical_prop->set_char_name(temp);

	cout << "Enter players name: ";
	cin.getline(temp,128);
	physical_prop->set_player_name(temp);

	cout << "Enter characters gender: ";
	cin.getline(temp, 128);
	physical_prop->set_gender(temp);
	
	cout << "Enter characters height: ";
	cin.getline(temp,128);
	physical_prop->set_height(temp);
	
	cout << "Enter characters weight: ";
	cin.getline(temp, 128);
	physical_prop->set_weight(temp);
	
	cout << "Enter characters hair colour: ";
	cin.getline(temp, 128);
	physical_prop->set_hair(temp);
	
	cout << "Enter characters eye colour: ";
	cin.getline(temp, 128);
	physical_prop->set_eyes(temp);
	
	cout << "Enter characters skin tone: ";
	cin.getline(temp, 128);
	physical_prop->set_skin(temp);

	cout << "Enter characters age: ";
	cin.getline(temp, 128);
	physical_prop->set_age(temp);

	cout << "Enter characters god: ";
	cin.getline(temp,128);
	physical_prop->set_god(temp);

	cout << "Enter characters alignment: ";
	cin.getline(temp, 128);
	physical_prop->set_alignment(temp);

	/*cout << "Characters name: " << physical_prop->get_char_name() << endl;
	cout << "Players name: " << physical_prop->get_player_name() << endl;
	cout << "Gender: " << physical_prop->get_gender() << endl;
	cout << "Height: " << physical_prop->get_height() << endl;
	cout << "Weight: " << physical_prop->get_weight() << endl;
	cout << "Hair: " << physical_prop->get_hair() << endl;
	cout << "Eyes: " << physical_prop->get_eyes() << endl;
	cout << "Skin: " << physical_prop->get_skin() << endl;
	cout << "Age: " << physical_prop->get_age() << endl;
	cout << "God: " << physical_prop->get_god() << endl;
	cout << "Alignment: " << physical_prop->get_alignment() << endl;*/
	delete [] temp;
}

int profile::get_rand_ability_score(int number_rolls)
{
	int *roll = new int [number_rolls];
	int smallest;
	int total=0;

	for (int i=0;i<number_rolls;i++)
	{
		roll[i] = roll_dice(6);
		total+=roll[i];
	}

	smallest = roll[0];

	// Find the smallest roll to discard
	for (int i=1;i<number_rolls;i++)
	{
		if (roll[i] < smallest)
		{
			smallest = roll[i];
		}
	}

    return (total - smallest);
}

int profile::roll_dice(int die)
{
	return (rand()%die)+1;
}

void profile::save_character(char* filename)
{
	char* name = new char[128];
	char physical_file[] = "temp\\physical";
	char abilities_file[] = "temp\\abilities";
	char skills_file[] = "temp\\skills";
	char combat_file[] = "temp\\combat";
	char feats_file[] = "temp\\feats";
	char spells_file[] = "temp\\spells";
	
	list_node<char*>* file_list=NULL;
	list_node<char*>* file_name;

	//cout << "Select name for file: ";
	//cin.getline(name, 128);

	//cerr << name << endl;
	strcpy(name, filename);

	// Make a temporary directory
	_mkdir("temp");
    
	// Get all the classes to save their files

	// Save the physical class' file
	physical_prop->save_character(physical_file);
	if (physical_prop != NULL)
	{
		// Add the file to the head of the list
		file_name = new list_node<char*>;
		file_name->next = NULL;
		file_name->node_value = new char [128];
		strcpy(file_name->node_value, physical_file);
		file_list = file_name;
	}

	if (abilities != NULL)
	{
		// Save the abilities
		abilities->write_to_file(abilities_file);
		file_name = new list_node<char*>;
		file_name->next = file_list;
		file_name->node_value = new char [128];
		strcpy(file_name->node_value, abilities_file);
		file_list = file_name;
	}

	if (skills != NULL)
	{
		// Save the skills
		skills->write_to_file(skills_file);
		file_name = new list_node<char*>;
		file_name->next = file_list;
		file_name->node_value = new char [128];
		strcpy(file_name->node_value, skills_file);
		file_list = file_name;
	}

	// Save the combat stats
	/*combat->write_to_file(combat_file);
	file_name = new list_node<char*>;
	file_name->next = file_list;
	file_name->node_value = new char [128];
	strcpy(file_name->node_value, combat_file);
	file_list = file_name;*/

	// Save the feats
	if (feats != NULL)
	{
		feats->write_to_file(feats_file);
		file_name = new list_node<char*>;
		file_name->next = file_list;
		file_name->node_value = new char [128];
		strcpy(file_name->node_value, feats_file);
		file_list = file_name;
	}

	// Save the spells
	if (spells != NULL)
	{
		spells->write_to_file(spells_file);
		file_name = new list_node<char*>;
		file_name->next = file_list;
		file_name->node_value = new char [128];
		strcpy(file_name->node_value, spells_file);
		file_list = file_name;
	}

	// Compile all the files into a single file
	write_to_file(name, file_list);
	
	// Remove all the temporary files and directory
	while (file_list != NULL)
	{
		remove(file_list->node_value);
		file_name = file_list;
		file_list = file_name->next;
		delete [] file_name->node_value;
		delete file_name;
	}
	_rmdir("temp");

	delete [] name;

	display_character_stats();
}

long profile::get_file_length(char* file)
{
	ifstream file_check;
	
	file_check.open(file);

	if (!file_check.good())
		return 0;

	file_check.seekg(0,ios::end);

	return file_check.tellg();
}

void profile::write_to_file(char* filename, list_node<char*>* &file_list)
{
	list_node<char*>* file_name = NULL;
	ofstream output_file;
	long file_length;

	// Open the file
	output_file.open(filename, ios::trunc | ios::binary);

	// Check if the file was successful in opening
	if (!output_file.good())
	{
		cerr << "Couldn't open file " << filename << " for output" << endl;
	}
	else
	{
		// Step through the file list converting as it goes
		file_name = file_list;
		while (file_name != NULL)
		{
			ifstream input_file;
			char word;
			input_file.open(file_name->node_value, ios::binary);

			if (input_file.good())
			{
				output_file.write((char*)file_name->node_value, 128*sizeof(char));
				file_length = get_file_length(file_name->node_value);
				output_file.write((char*)&file_length, sizeof(long));
				while (!input_file.eof())
				{
					input_file.read((char*)&word, sizeof(char));
					word ^= 255;
					output_file.write((char*)&word, sizeof(char));
					//word ^= 255;
				}
			}
			file_name = file_name->next;
		}
	}
}

void profile::read_from_file(char* filename)
{
	ifstream input_file;

	// Open file
	input_file.open(filename);

	// Check io state
	if (!input_file.good())
	{
		return;
	}
}

feat_list* profile::get_feats()
{
	return feats;
}

feat_list* profile::get_full_feats()
{
	return full_feats;
}

Spell_list* profile::get_spells()
{
	return spells;
}

Spell_list* profile::get_full_spells()
{
	return full_spells;
}

char_int_group* profile::get_abilities()
{
	return abilities;
}

char_int_group* profile::get_skills()
{
	return skills;
}

char_int_group* profile::get_combat_stats()
{
	return combat;
}

physical* profile::get_physical()
{
	return physical_prop;
}

xp* profile::get_xp()
{
	return experience;
}

race* profile::get_racial()
{
	return char_race;
}

money* profile::get_money()
{
	return purse;
}

race_selector* profile::get_race_list()
{
	return race_list;
}

race_selector* profile::get_list_classes()
{
	return list_classes;
}

class_list* profile::get_my_classes()
{
	return my_classes;
}

void profile::initialise()
{
	char ability_string[]="abilities.ddd";
	char skills_string[]="skills.ddd";
	char combat_string[]="combat.ddd";

	// Create instances
	abilities = new char_int_group;
	skills = new char_int_group;
	combat = new char_int_group;
	feats = new feat_list;
	full_feats = new feat_list;
	spells = new Spell_list;
	full_spells = new Spell_list;
	physical_prop = new physical;
	experience = new xp;
	char_race = new race;
	purse = new money;
	race_list = new race_selector("xml\\race.xml");
	list_classes = new race_selector("xml\\classes.xml");
	my_classes = new class_list;

	// Link to the parent
	feats->link_parent(this);
	abilities->link_parent(this);
	skills->link_parent(this);
	combat->link_parent(this);
	my_classes->link_parent(this);

	// Read definition files
	abilities->read_file(ability_string);
	skills->read_file(skills_string);
	combat->read_file(combat_string);
	full_feats->read_from_file("feats.ddd");
	full_spells->read_from_file("spells.ddd");

	set_num_skill_points(0);
	set_num_language_points(0);
	set_num_feat_points(0);
	set_num_spell_points(0);
}

int profile::get_num_skill_points()
{
	return num_skill_points;
}

void profile::set_num_skill_points(int point_set)
{
	num_skill_points = point_set;
}

int profile::get_num_language_points()
{
	return num_language_points;
}

void profile::set_num_language_points(int point_set)
{
	num_language_points = point_set;
}

int profile::get_num_feat_points()
{
	return num_feat_points;
}

void profile::set_num_feat_points(int point_set)
{
	num_feat_points = point_set;
}

int profile::get_num_spell_points()
{
	return num_spell_points;
}

void profile::set_num_spell_points(int point_set)
{
	num_spell_points = point_set;
}

#pragma managed
