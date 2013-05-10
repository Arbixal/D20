/*********************************************************\
* profile.h                                               *
* =========                                               *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 30/08/04                                   *
* Description: The overall class that contains all the    *
*              other classes, and allows communication    *
*              between them all                           *
\*********************************************************/

#ifndef _PROFILE_H
#define _PROFILE_H

#include "char_int_group.h"
#include "class_list.h"
#include "feat_list.h"
#include "physical.h"
#include "xp.h"
#include "race.h"
#include "money.h"
#include "spell_list.h"
#include "item_list.h"

class profile
{
	private:
		char_int_group *abilities;
		char_int_group *skills;
		char_int_group *combat;
		physical *physical_prop;
		feat_list *feats;
		feat_list *full_feats;
		Spell_list *spells;
		Spell_list *full_spells;
		xp *experience;
		race *char_race;
		race_selector *race_list;
		race_selector *list_classes;
		class_list* my_classes;
		money *purse;
		int num_skill_points;
		int num_language_points;
		int num_feat_points;
		int num_spell_points;

	public:
		profile();
		~profile();
		void create_new_character();
		void display_character_stats();
		void create_physical();
		int get_rand_ability_score(int number_rolls);
		int roll_dice(int die);
		void save_character(char* filename);
		long get_file_length(char*);
		void write_to_file(char* filename, list_node<char*>* &file_list);
		void read_from_file(char* filename);
		void initialise();
		//void apply_modifier(char*);

		int get_num_skill_points();
		void set_num_skill_points(int point_set);
		int get_num_language_points();
		void set_num_language_points(int point_set);
		int get_num_feat_points();
		void set_num_feat_points(int point_set);
		int get_num_spell_points();
		void set_num_spell_points(int point_set);

		//TODO: Get Functions
		feat_list* get_feats();
		feat_list* get_full_feats();
		Spell_list* get_spells();
		Spell_list* get_full_spells();
		char_int_group* get_abilities();
		char_int_group* get_skills();
		char_int_group* get_combat_stats();
		physical* get_physical();
		xp* get_xp();
		race* get_racial();
		money* get_money();
		race_selector* get_race_list();
		race_selector* get_list_classes();
		class_list* get_my_classes();
};

#endif
