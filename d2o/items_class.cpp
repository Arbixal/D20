/*********************************************************\
* items.cpp                                               *
* ============                                            *
* Project: D20 Character Generation                       *
* Created By: Mark Hellmund                               *
* Last Edited By:			                              *
* Last Edited:				                              *
* Description: Functions to manipulate items              *
*									                      *
\*********************************************************/
#include "stdafx.h"
#include "items_class.h"

/*********************************************************\
* item_spell Class										  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:		                                      *
* Description: A class to hold info about spells an item  *
*			   currently has, was made a class due to the *
*			   dynamic variable requirement and for ease  *
*			   of use									  *
\*********************************************************/
item_spell::item_spell()
{
	spellName = NULL;
}

item_spell::~item_spell()
{
	if (spellName != NULL)
		delete [] spellName;
}

item_spell::item_spell(const item_spell &new_value)
{
	spellName = new char((int)strlen(new_value.spellName)+1);
	strcpy(spellName,new_value.spellName);
	charges = new_value.charges;
}
item_spell& item_spell::operator= (const item_spell new_value)
{
	spellName = new char((int)strlen(new_value.spellName)+1);
	strcpy(spellName,new_value.spellName);
	charges = new_value.charges;
	return *this;
}

/*********************************************************\
* power	Class											  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: A class to hold info about spells an item  *
*			   currently has, was made a class due to the *
*			   dynamic variable requirement and for ease  *
*			   of use									  *
\*********************************************************/
//Power Class Constructors
power::power()
{
	p_power = NULL;
}
power::power(const power &new_value)
{
	p_power = new char((int)strlen(new_value.p_power)+1);
	strcpy(p_power,new_value.p_power);

	price = new_value.price;
}

power::~power()
{
	if (p_power != NULL)
		delete [] p_power;
}


power& power::operator= (const power new_value)
{
	p_power = new char((int)strlen(new_value.p_power)+1);
	strcpy(p_power,new_value.p_power);

	price = new_value.price;
	return *this;
}



/*********************************************************\
* item Class											  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:			                                  *
* Description: The base class which holds information	  *
*			   which is relevant for all item types		  *
\*********************************************************/
item::item()
{
	item_name=NULL;
	item_currency=NULL;
	item_description=NULL;
	item_base_material=NULL;
	item_type=NULL;
};

item::~item()
{
	if(item_name != NULL)
		delete [] item_name;
	if(item_currency != NULL)
		delete [] item_currency;
	if(item_description != NULL)
		delete [] item_description;
	if(item_base_material != NULL)
		delete [] item_base_material;
	if(item_type != NULL)
		delete [] item_type;
};

item::item(const item &new_value)
{

	item_name = new char((int)strlen(new_value.item_name));
	strcpy(item_name,new_value.item_name);

	item_currency = new char((int)strlen(new_value.item_currency));
	strcpy(item_currency,new_value.item_currency);

	item_description = new char((int)strlen(new_value.item_description));
	strcpy(item_description,new_value.item_description);

	item_base_material = new char((int)strlen(new_value.item_base_material));
	strcpy(item_base_material,new_value.item_base_material);

	item_type = new char((int)strlen(new_value.item_type));
	strcpy(item_type,new_value.item_type);

	item_weight = new_value.item_weight;
	item_price = new_value.item_price;
	item_masterwork = new_value.item_masterwork;
}
item& item::operator= (const item new_value)
{
		item_name = new char((int)strlen(new_value.item_name));
	strcpy(item_name,new_value.item_name);

	item_currency = new char((int)strlen(new_value.item_currency));
	strcpy(item_currency,new_value.item_currency);

	item_description = new char((int)strlen(new_value.item_description));
	strcpy(item_description,new_value.item_description);

	item_base_material = new char((int)strlen(new_value.item_base_material));
	strcpy(item_base_material,new_value.item_base_material);

	item_type = new char((int)strlen(new_value.item_type));
	strcpy(item_type,new_value.item_type);

	item_weight = new_value.item_weight;
	item_price = new_value.item_price;
	item_masterwork = new_value.item_masterwork;
return *this;
}
char* item::get_item_name()
{
	return item_name;
};

char* item::get_item_currency()
{
	return item_currency;
};
char* item::get_item_description()
{
	return item_description;
};

char* item::get_item_base_material()
{
	return item_base_material;
}

char* item::get_item_type()
{
	return item_type;
};

int item::get_item_weight()
{
	return item_weight;
};

int item::get_item_price()
{
	return item_price;
};


bool item::get_item_masterwork()
{
	return item_masterwork;
};





void item::set_item_name(char* i_name)
	{
		item_name = new char[(int)strlen(i_name)+1];
		strcpy(item_name,i_name);
	};

void item::set_item_currency(char* i_currency)
	{
		item_currency = new char[(int)strlen(i_currency)+1];
		strcpy(item_currency,i_currency);
	}

void item::set_item_description(char* i_description)
	{
		item_description = new char[(int)strlen(i_description)+1];
		strcpy(item_description,i_description);
	}

void item::set_item_base_material(char* i_base_material)
	{
		item_base_material = new char[(int)strlen(i_base_material)+1];
		strcpy(item_base_material,i_base_material);
	}

void item::set_item_type(char* i_type)
	{
		item_type = new char[(int)strlen(i_type)+1];
		strcpy(item_type,i_type);
	}

void item::set_item_weight(int i_weight)
	{
		item_weight = i_weight;
	}

void item::set_item_price(int i_price)
	{
		item_price = i_price;
	}
void item::set_item_masterwork(bool i_masterwork)
	{
		item_masterwork = i_masterwork;
	}



	

/*********************************************************\
* Armor Class											  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: A class to hold info about non magical     *
*			   armor									  *
\*********************************************************/
armor::armor()
{
	armor_type = NULL;
	armor_size = NULL;
}
armor::~armor()
{
	if (armor_type != NULL)
		delete [] armor_type;
	if (armor_size != NULL)
		delete [] armor_size;
}

char* armor::get_armor_type()
{
	return armor_type;
}

char* armor::get_armor_size()
	{
		return armor_size;
	}

int armor::get_armor_bonus()
	{
		return armor_bonus;
	}

int armor::get_armor_max_dexterity()
	{
		return armor_max_dexterity;
	}

int armor::get_armor_check_penalty()
	{
		return armor_check_penalty;
	}

int armor::get_armor_arcane_failure()
	{
		return armor_arcane_failure;
	}

int armor::get_armor_speed_20()
	{
		return armor_speed_20;
	}

int armor::get_armor_speed_30()
	{
		return armor_speed_30;
	}



void armor::set_armor_type(char* a_armor_type)
	{
		armor_type = new char[(int)strlen(armor_type)+1];
		strcpy(armor_type, a_armor_type);
	}

void armor::set_armor_size(char* a_armor_size)
	{
		armor_size = new char[(int)strlen(a_armor_size)+1];
		strcpy(armor_size,a_armor_size);
	}

void armor::set_armor_bonus(int a_armor_bonus)
	{
		armor_bonus = a_armor_bonus;
	}

void armor::set_armor_max_dexterity(int a_armor_max_dexterity)
	{
		armor_max_dexterity = a_armor_max_dexterity;
	}

void armor::set_armor_check_penalty(int a_armor_check_penalty)
	{
		armor_check_penalty = a_armor_check_penalty;
	}

void armor::set_armor_arcane_failure(int a_armor_arcane_failure)
	{
		armor_arcane_failure = a_armor_arcane_failure;
	}

void armor::set_armor_speed_20(int a_armor_speed_20)
	{
		armor_speed_20 = a_armor_speed_20;
	}

void armor::set_armor_speed_30(int a_armor_speed_30)
	{
		armor_speed_30 = a_armor_speed_30;
	}




	
/*********************************************************\
* Weapon Class											  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: A class to hold info about non magical     *
*			   Weapons									  *
\*********************************************************/
weapon::weapon()
{
	weapon_critical = NULL;
	weapon_damage = NULL;
	weapon_type = NULL;
	weapon_handedness = NULL;
	weapon_size = NULL;
};

weapon::~weapon()
{
	if(weapon_critical != NULL)
		delete [] weapon_critical;
	if(weapon_damage != NULL)
		delete [] weapon_damage;
	if(weapon_type != NULL)
		delete [] weapon_type;
	if(weapon_handedness != NULL)
		delete [] weapon_handedness;
	if(weapon_size != NULL)
		delete [] weapon_size;
};

char* weapon::get_weapon_critical()
{
	return weapon_critical;
}

char* weapon::get_weapon_damage()
{
	return weapon_damage;
}

char* weapon::get_weapon_type()
{
	return weapon_type;
}

char* weapon::get_weapon_handedness()
{
	return weapon_handedness;
}

char* weapon::get_weapon_size()
{
	return weapon_size;
}

int weapon::get_weapon_rank()
{
	return weapon_rank;
}

int weapon::get_weapon_range()
{
	return weapon_range;
}

bool weapon::get_weapon_two_handed_bonus()
{
	return weapon_two_handed_bonus;
}

bool weapon::get_weapon_strength_bonus()
{
	return weapon_strength_bonus;
}







void weapon::set_weapon_critical(char* w_weapon_critical)
{
	weapon_critical = new char[(int)strlen(w_weapon_critical)+1];
	strcpy(weapon_critical, w_weapon_critical);
}

void weapon::set_weapon_damage(char* w_weapon_damage)
{
	weapon_damage = new char[(int)strlen(w_weapon_damage)+1];
	strcpy(weapon_damage,w_weapon_damage);
}

void weapon::set_weapon_type(char* w_weapon_type)
{
	weapon_type = new char[(int)strlen(w_weapon_type)+1];
	strcpy(weapon_type, w_weapon_type);
}

void weapon::set_weapon_handedness(char* w_weapon_handedness)
{
	weapon_handedness = new char[(int)strlen(w_weapon_handedness)+1];
	strcpy(weapon_handedness,w_weapon_handedness);
}

void weapon::set_weapon_size(char* w_weapon_size)
{
	weapon_size = new char[(int)strlen(w_weapon_size)+1];
	strcpy(weapon_size, w_weapon_size);
}

void weapon::set_weapon_rank(int w_weapon_rank)
{
	weapon_rank = w_weapon_rank;
}

void weapon::set_weapon_range(int w_weapon_range)
{
	weapon_range=w_weapon_range;
}

void weapon::set_weapon_two_handed_bonus(bool w_weapon_two_handed_bonus)
{
	weapon_two_handed_bonus = w_weapon_two_handed_bonus;
}

void weapon::set_weapon_strength_bonus(bool w_weapon_strength_bonus)
{
	weapon_strength_bonus = w_weapon_strength_bonus;
}

	
/*********************************************************\
* item_intelligence Class								  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: A class for storing information on items   *
*			   with their own intelligence				  *
\*********************************************************/
item_intelligence::item_intelligence()
{
	alignment = NULL;
	communication = NULL;
	senses = NULL;
	purpose = NULL;
	languages = NULL;
}
item_intelligence::item_intelligence(const item_intelligence &new_value)
{

	set_alignment(new_value.get_alignment());
	set_communication(new_value.get_communication());
	set_senses(new_value.get_senses());
	set_purpose(new_value.get_purpose());
	set_languages(new_value.get_languages());
	set_intelligence(new_value.get_intelligence());
	set_wisdom(new_value.get_wisdom());
	set_charisma(new_value.get_charisma());
	set_lesser_powers(new_value.get_lesser_powers());
	set_greater_powers(new_value.get_greater_powers());
	set_dedicated_power(new_value.get_dedicated_power());
	set_num_lesser(new_value.get_num_lesser());
	set_num_greater(new_value.get_num_greater());
	set_ego(new_value.get_ego());
	set_read_language(new_value.get_read_language());
	set_read_magic(new_value.get_read_magic());

}

item_intelligence::~item_intelligence()
{
	if(alignment != NULL)
		delete [] alignment;
	if(communication != NULL)
		delete [] communication;
	if(senses != NULL)
		delete [] senses;
	if(purpose != NULL)
		delete [] purpose;

	if(languages != NULL)
	{
		int row=0;
		while(languages[row] != NULL)
			row++;
		
		for(int i = 0;i<row-1;i++)
		{
			delete [] *(languages+i);
		}
	}
}


item_intelligence& item_intelligence::operator= (const item_intelligence new_value)
{
	set_alignment(new_value.get_alignment());
	set_communication(new_value.get_communication());
	set_senses(new_value.get_senses());
	set_purpose(new_value.get_purpose());
	set_languages(new_value.get_languages());
	set_intelligence(new_value.get_intelligence());
	set_wisdom(new_value.get_wisdom());
	set_charisma(new_value.get_charisma());
	set_lesser_powers(new_value.get_lesser_powers());
	set_greater_powers(new_value.get_greater_powers());
	set_dedicated_power(new_value.get_dedicated_power());
	set_num_lesser(new_value.get_num_lesser());
	set_num_greater(new_value.get_num_greater());
	set_ego(new_value.get_ego());
	set_read_language(new_value.get_read_language());
	set_read_magic(new_value.get_read_magic());
	return *this;
}
char* item_intelligence::get_alignment()const
{
	return alignment;
}

char* item_intelligence::get_communication()const
{
	return communication;
}

char* item_intelligence::get_senses() const
{
	return senses;
}

char* item_intelligence::get_purpose() const
{
	return purpose;
}
char** item_intelligence::get_languages() const
{
	return languages;
}

char_int_pair item_intelligence::get_intelligence() const
{
	return intelligence;
}

char_int_pair item_intelligence::get_wisdom() const
{
	return wisdom;
}

char_int_pair item_intelligence::get_charisma() const
{
	return charisma;
}


power* item_intelligence::get_lesser_powers() const
{
	return lesser_powers;
}

power* item_intelligence::get_greater_powers() const
{
	return greater_powers;
}
power* item_intelligence::get_dedicated_power() const
{
	return dedicated_power;
}
int item_intelligence::get_num_lesser() const
{
	return num_lesser;
}

int item_intelligence::get_num_greater() const
{
	return num_greater;
}

int item_intelligence::get_ego() const
{
	return ego;
}

long item_intelligence::get_intel_cost() const
{
	return intel_cost;
}

bool item_intelligence::get_read_language() const
{
	return read_language;
}

bool item_intelligence::get_read_magic() const
{
	return read_magic;
}


void item_intelligence::set_alignment(char* i_alignment)
{
	alignment = new char[(int)strlen(i_alignment)+1];
	strcpy(alignment,i_alignment);
}

void item_intelligence::set_communication(char* i_communication)
{
	communication = new char[(int)strlen(i_communication)+1];
	strcpy(communication,i_communication);
}

void item_intelligence::set_senses(char* i_senses)
{
	senses = new char[(int)strlen(i_senses)+1];
	strcpy(senses,i_senses);
}

void item_intelligence::set_purpose(char* i_purpose)
{
	purpose = new char[(int)strlen(i_purpose)+1];
	strcpy(purpose,i_purpose);
}

void item_intelligence::set_languages(char **i_languages)
{
	int row=0;
	int col =0;
	if(i_languages != NULL)
	{
		while(i_languages[row] != NULL)
		row++;
	}
	

	languages = new char * [row];
	languages[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(i_languages+i))+1;
		*(languages+i) = new char[col];
		strcpy(*(languages+i),*(i_languages+i));
	}

}

void item_intelligence::set_intelligence(char_int_pair i_intelligence)
{
intelligence=i_intelligence;
}
void item_intelligence::set_wisdom(char_int_pair i_wisdom)
{
wisdom=i_wisdom;
}
void item_intelligence::set_charisma(char_int_pair i_charisma)
{
charisma=i_charisma;
}

void item_intelligence::set_lesser_powers(power* i_lesser_powers)
{
	lesser_powers=i_lesser_powers;
}

void item_intelligence::set_greater_powers(power* i_greater_powers)
{
	greater_powers=i_greater_powers;
}

void item_intelligence::set_dedicated_power(power* i_dedicated_power)
{
	dedicated_power=i_dedicated_power;
}

void item_intelligence::set_num_lesser(int i_num_lesser)
{
	num_lesser = i_num_lesser;
}

void item_intelligence::set_num_greater(int i_num_greater)
{
	num_greater=i_num_greater;
}

void item_intelligence::set_ego(int i_ego)
{
	ego=i_ego;
}


void item_intelligence::set_read_language(bool i_read_language)
{
	read_language=i_read_language;
}

void item_intelligence::set_read_magic(bool i_read_magic)
{
	read_magic=i_read_magic;
}



	
/*********************************************************\
* magical_item class 									  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: A class to hold info about magical items   *
\*********************************************************/
char** magical_item::get_feats()
{
	return feats;
}

char** magical_item::get_notes()
{
	return notes;
}

char** magical_item::get_cursed_notes()
{
	return cursed_notes;
}

char_int_pair magical_item::get_skills()
{
	return skills;
}

char_int_pair magical_item::get_abilities()
{
	return abilities;
}

char_int_pair magical_item::get_combat_stats()
{
	return combat_stats;
}


item_intelligence* magical_item::get_intelligence()
{
	return intelligence;
}


item_spell* magical_item::get_spell_list()
{
	return spell_list;
}
void magical_item::set_feats(char** m_feats)
{
	int row=0;
	int col =0;
	if(m_feats != NULL)
	{
		while(m_feats[row] != NULL)
		row++;
	}
	

	feats = new char * [row];
	feats[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_feats+i))+1;
		*(feats+i) = new char[col];
		strcpy(*(feats+i),*(m_feats+i));
	}
}

void magical_item::set_notes(char** m_notes)
{
	int row=0;
	int col =0;
	if(m_notes != NULL)
	{
		while(m_notes[row] != NULL)
		row++;
	}
	

	notes = new char * [row];
	notes[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_notes+i))+1;
		*(notes+i) = new char[col];
		strcpy(*(notes+i),*(m_notes+i));
	}
}

void magical_item::set_cursed_notes(char** m_cursed_notes)
{
	int row=0;
	int col =0;
	if(m_cursed_notes != NULL)
	{
		while(m_cursed_notes[row] != NULL)
		row++;
	}
	

	cursed_notes = new char * [row];
	cursed_notes[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_cursed_notes+i))+1;
		*(cursed_notes+i) = new char[col];
		strcpy(*(cursed_notes+i),*(m_cursed_notes+i));
	}
}

void magical_item::set_skills(char_int_pair m_skills)
{
	skills=m_skills;
}

void magical_item::set_abilities(char_int_pair m_abilities)
{
	abilities=m_abilities;
}

void magical_item::set_combat_stats(char_int_pair m_combat_stats)
{
	combat_stats=m_combat_stats;
}

void magical_item::set_intelligence(item_intelligence* m_intelligence)
{
intelligence = m_intelligence;
}

void magical_item::set_spell_list(item_spell* m_spell_list)
{
	spell_list = m_spell_list;
}


/*********************************************************\
* magical_weapon Class									  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: A class to hold info about magical armor   *
\*********************************************************/
char** magical_weapon::get_feats()
{
	return feats;
}

char** magical_weapon::get_notes()
{
	return notes;
}

char** magical_weapon::get_cursed_notes()
{
	return cursed_notes;
}

char_int_pair magical_weapon::get_skills()
{
	return skills;
}

char_int_pair magical_weapon::get_abilities()
{
	return abilities;
}

char_int_pair magical_weapon::get_combat_stats()
{
	return combat_stats;
}


item_intelligence* magical_weapon::get_intelligence()
{
	return intelligence;
}


item_spell* magical_weapon::get_spell_list()
{
	return spell_list;
}
void magical_weapon::set_feats(char** m_feats)
{
	int row=0;
	int col =0;
	if(m_feats != NULL)
	{
		while(m_feats[row] != NULL)
		row++;
	}
	

	feats = new char * [row];
	feats[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_feats+i))+1;
		*(feats+i) = new char[col];
		strcpy(*(feats+i),*(m_feats+i));
	}
}

void magical_weapon::set_notes(char** m_notes)
{
	int row=0;
	int col =0;
	if(m_notes != NULL)
	{
		while(m_notes[row] != NULL)
		row++;
	}
	

	notes = new char * [row];
	notes[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_notes+i))+1;
		*(notes+i) = new char[col];
		strcpy(*(notes+i),*(m_notes+i));
	}
}

void magical_weapon::set_cursed_notes(char** m_cursed_notes)
{
	int row=0;
	int col =0;
	if(m_cursed_notes != NULL)
	{
		while(m_cursed_notes[row] != NULL)
		row++;
	}
	

	cursed_notes = new char * [row];
	cursed_notes[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_cursed_notes+i))+1;
		*(cursed_notes+i) = new char[col];
		strcpy(*(cursed_notes+i),*(m_cursed_notes+i));
	}
}

void magical_weapon::set_skills(char_int_pair m_skills)
{
	skills=m_skills;
}

void magical_weapon::set_abilities(char_int_pair m_abilities)
{
	abilities=m_abilities;
}

void magical_weapon::set_combat_stats(char_int_pair m_combat_stats)
{
	combat_stats=m_combat_stats;
}

void magical_weapon::set_intelligence(item_intelligence* m_intelligence)
{
intelligence = m_intelligence;
}

void magical_weapon::set_spell_list(item_spell* m_spell_list)
{
	spell_list = m_spell_list;
}





/*********************************************************\
* magical_weapon Class									  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: A class to hold info about magical weapon  *
\*********************************************************/
char** magical_armor::get_feats()
{
	return feats;
}

char** magical_armor::get_notes()
{
	return notes;
}

char** magical_armor::get_cursed_notes()
{
	return cursed_notes;
}

char_int_pair magical_armor::get_skills()
{
	return skills;
}

char_int_pair magical_armor::get_abilities()
{
	return abilities;
}

char_int_pair magical_armor::get_combat_stats()
{
	return combat_stats;
}


item_intelligence* magical_armor::get_intelligence()
{
	return intelligence;
}


item_spell* magical_armor::get_spell_list()
{
	return spell_list;
}
	
void magical_armor::set_feats(char** m_feats)
{
	int row=0;
	int col =0;
	if(m_feats != NULL)
	{
		while(m_feats[row] != NULL)
		row++;
	}
	

	feats = new char * [row];
	feats[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_feats+i))+1;
		*(feats+i) = new char[col];
		strcpy(*(feats+i),*(m_feats+i));
	}
}

void magical_armor::set_notes(char** m_notes)
{
	int row=0;
	int col =0;
	if(m_notes != NULL)
	{
		while(m_notes[row] != NULL)
		row++;
	}
	

	notes = new char * [row];
	notes[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_notes+i))+1;
		*(notes+i) = new char[col];
		strcpy(*(notes+i),*(m_notes+i));
	}
}

void magical_armor::set_cursed_notes(char** m_cursed_notes)
{
	int row=0;
	int col =0;
	if(m_cursed_notes != NULL)
	{
		while(m_cursed_notes[row] != NULL)
		row++;
	}
	

	cursed_notes = new char * [row];
	cursed_notes[row-1]=NULL;

	for(int i = 0;i<row-1;i++)
	{
		col=(int)strlen(*(m_cursed_notes+i))+1;
		*(cursed_notes+i) = new char[col];
		strcpy(*(cursed_notes+i),*(m_cursed_notes+i));
	}
}

void magical_armor::set_skills(char_int_pair m_skills)
{
	skills=m_skills;
}

void magical_armor::set_abilities(char_int_pair m_abilities)
{
	abilities=m_abilities;
}

void magical_armor::set_combat_stats(char_int_pair m_combat_stats)
{
	combat_stats=m_combat_stats;
}

void magical_armor::set_intelligence(item_intelligence* m_intelligence)
{
intelligence = m_intelligence;
}

void magical_armor::set_spell_list(item_spell* m_spell_list)
{
	spell_list = m_spell_list;
}




