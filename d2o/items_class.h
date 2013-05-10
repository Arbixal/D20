/*********************************************************\
* items.h                                                 *
* ============                                            *
* Project: D20 Character Generation                       *
* Created By: Mark Hellmund                               *
* Last Edited By:			                              *
* Last Edited:				                              *
* Description: Functions to manipulate the items          *
*									                      *
\*********************************************************/

#ifndef _ITEMS_CLASS_H_
#define _ITEMS_CLASS_H_

#include <iostream>
#include <cstring>
using namespace std;
#include "char_int_pair.h"


class item_spell
{
public:
	item_spell();
	item_spell(const item_spell &new_value);
	~item_spell();
	item_spell& operator= (const item_spell new_value);
private:
	char* spellName;
	int charges;
};
class power
{
public:
	power();
	power(const power &new_value);
	~power();
	power& operator= (const power new_value);
private:
	char* p_power;
	long price;
};

class item
{
public:
    item();
	~item();
	item(const item &new_value);
	item& operator= (const item new_value);
	char* get_item_name();
    char* get_item_currency();
	char* get_item_description();
	char* get_item_base_material();
	char* get_item_type();
	int get_item_weight();
    int get_item_price();
    bool get_item_masterwork();

	void set_item_name(char* i_name);
    void set_item_currency(char* i_currency);
	void set_item_description(char* i_description);
	void set_item_base_material(char* i_base_material);
	void set_item_type(char* i_type);
	void set_item_weight(int i_weight);
    void set_item_price(int i_price);
    void set_item_masterwork(bool i_masterwork);

protected:
    char* item_name;
    char* item_currency;
	char* item_description;
	char* item_base_material;
	char* item_type;
	int item_weight;
    int item_price;
    bool item_masterwork;
	
    
};

class armor : public item
{
public:

	armor();
	~armor();

	char* get_armor_type();
	char* get_armor_size();
	int get_armor_bonus();
	int get_armor_max_dexterity();
	int get_armor_check_penalty();
    int get_armor_arcane_failure();
    int get_armor_speed_20();
    int get_armor_speed_30();

	void set_armor_type(char* a_armor_type);
	void set_armor_size(char* a_armor_size);
	void set_armor_bonus(int a_armor_bonus);
	void set_armor_max_dexterity(int a_armor_max_dexterity);
	void set_armor_check_penalty(int a_armor_check_penalty);
	void set_armor_arcane_failure(int a_armor_arcane_failure);
	void set_armor_speed_20(int a_armor_speed_20);
	void set_armor_speed_30(int a_armor_speed_30);

private:
	char* armor_type;
	char* armor_size;
	int armor_bonus;
    int armor_max_dexterity;
    int armor_check_penalty;
    int armor_arcane_failure;
    int armor_speed_20;
    int armor_speed_30;

};
class weapon : public item
{
public:
	weapon();
	~weapon();
	char* get_weapon_critical();
	char* get_weapon_damage();
	char* get_weapon_type();
	char* get_weapon_handedness();
	char* get_weapon_size();
	int get_weapon_rank();
	int get_weapon_range();
	bool get_weapon_two_handed_bonus();
	bool get_weapon_strength_bonus();

	void set_weapon_critical(char* w_weapon_critical);
	void set_weapon_damage(char* w_weapon_damage);
	void set_weapon_type(char* w_weapon_type);
	void set_weapon_handedness(char* w_weapon_handedness);
	void set_weapon_size(char* w_weapon_size);
	void set_weapon_rank(int w_weapon_rank);
	void set_weapon_range(int w_weapon_range);
	void set_weapon_two_handed_bonus(bool wt_weapon_two_handed_bonus);
	void set_weapon_strength_bonus(bool w_weapon_strength_bonus);


private:
    char* weapon_critical;
    char* weapon_damage;
    char* weapon_type;
	char* weapon_handedness;
	char* weapon_size;
	int weapon_rank;
    int weapon_range;
    bool weapon_two_handed_bonus;
	bool weapon_strength_bonus;
};

class item_intelligence
{
public:
	item_intelligence();
	item_intelligence(const item_intelligence &new_value);
	~item_intelligence();
	item_intelligence& operator= (const item_intelligence new_value);
	char* get_alignment() const;
	char* get_communication() const;
	char* get_senses() const;
	char* get_purpose() const;
	char** get_languages() const;
	char_int_pair get_intelligence() const;
	char_int_pair get_wisdom() const;
	char_int_pair get_charisma() const;
	power* get_lesser_powers() const; 
	power* get_greater_powers() const;
	power* get_dedicated_power() const;
	int get_num_lesser() const;
	int get_num_greater() const;
	int get_ego() const;
	long get_intel_cost() const;
	bool get_read_language() const;
	bool get_read_magic() const;

	void set_alignment(char* i_alignment);
	void set_communication(char* i_communication);
	void set_senses(char* i_senses);
	void set_purpose(char* i_purpose);
	void set_languages(char **i_languages);
	void set_intelligence(char_int_pair i_intelligence);
	void set_wisdom(char_int_pair i_wisdom);
	void set_charisma(char_int_pair i_charisma);
	void set_lesser_powers(power* i_lesser_powers);
	void set_greater_powers(power* i_greater_powers);
	void set_dedicated_power(power* i_dedicated_power);
	void set_num_lesser(int i_num_lesser);
	void set_num_greater(int i_num_greater);
	void set_ego(int i_ego);
	void set_read_language(bool i_read_language);
	void set_read_magic(bool i_read_magic);

private:
	char* alignment;
	char* communication;
	char* senses;
	char* purpose;
	char** languages;  //List
	char_int_pair intelligence;
	char_int_pair wisdom;
	char_int_pair charisma;
	power* lesser_powers;  //List
	power* greater_powers;  //List
	power* dedicated_power;  //List
	int num_lesser;
	int num_greater;
	int ego;
	long intel_cost;
	bool read_language;
	bool read_magic;
};
class magical_item : public item
{
public:
	char** get_feats();
	char** get_notes();
	char** get_cursed_notes();
	char_int_pair get_skills();
	char_int_pair get_abilities();
	char_int_pair get_combat_stats();
	item_intelligence* get_intelligence();
	item_spell* get_spell_list();

	void set_feats(char ** m_feats);
	void set_notes(char** m_notes);
	void set_cursed_notes(char** m_cursed_notes);
	void set_skills(char_int_pair m_skills);
	void set_abilities(char_int_pair m_abilities);
	void set_combat_stats(char_int_pair m_combat_stats);
	void set_intelligence(item_intelligence* m_intelligence);
	void set_spell_list(item_spell* m_spell_list);

private:
	char** feats;  //List
	char** notes;  //List
	char** cursed_notes;  //List
	char_int_pair skills;
	char_int_pair abilities;
	char_int_pair combat_stats;
	item_intelligence* intelligence;
	item_spell* spell_list;  //List
};

class magical_weapon : public weapon
{
public:
	char** get_feats();
	char** get_notes();
	char** get_cursed_notes();
	char_int_pair get_skills();
	char_int_pair get_abilities();
	char_int_pair get_combat_stats();
	item_intelligence* get_intelligence();
	item_spell* get_spell_list();

	void set_feats(char ** m_feats);
	void set_notes(char** m_notes);
	void set_cursed_notes(char** m_cursed_notes);
	void set_skills(char_int_pair m_skills);
	void set_abilities(char_int_pair m_abilities);
	void set_combat_stats(char_int_pair m_combat_stats);
	void set_intelligence(item_intelligence* m_intelligence);
	void set_spell_list(item_spell* m_spell_list);

private:
    char** feats;  //List
    char** notes;  //List
	char** cursed_notes;  //List
    char_int_pair skills;
    char_int_pair abilities;
    char_int_pair combat_stats;
	item_intelligence* intelligence;
	item_spell* spell_list;

};

class magical_armor : public armor
{
public:
	char** get_feats();
	char** get_notes();
	char** get_cursed_notes();
	char_int_pair get_skills();
	char_int_pair get_abilities();
	char_int_pair get_combat_stats();
	item_intelligence* get_intelligence();
	item_spell* get_spell_list();

	void set_feats(char ** m_feats);
	void set_notes(char** m_notes);
	void set_cursed_notes(char** m_cursed_notes);
	void set_skills(char_int_pair m_skills);
	void set_abilities(char_int_pair m_abilities);
	void set_combat_stats(char_int_pair m_combat_stats);
	void set_intelligence(item_intelligence* m_intelligence);
	void set_spell_list(item_spell* m_spell_list);

private:
    char** feats;  //List
    char** notes;  //List
	char** cursed_notes;  //List
    char_int_pair skills;
    char_int_pair abilities;
    char_int_pair combat_stats;
	item_intelligence* intelligence;
	item_spell* spell_list;

};

#endif