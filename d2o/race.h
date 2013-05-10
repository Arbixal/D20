/***************************************
* Race.h                               *
* ========                             *
* Project: D20 Character Generation    *
* Created By: Mark Hellmund            *
* Last Edited By: Michael Tonini       *
* Last Edited: 13/09/2004              *
* Description:  Contains the race class*
* This reads stores and manages race   *
* info.                                *
***************************************/
#ifndef RACE_H_
#define RACE_H_

#include "modifier_node.h"

class race
{
	private:
		char* name; //done
		char* size; //done
		int base_speed; //done
		char** languages; //done
		char** languages_choice; // done
		char* fav_class; //done
        //need char_int pairs for special I think.
		char** special;
		char* dm_notes; //done

		int languages_length;
        int languages_choice_length;

	public:
		race();
		race(char*);
		race(char*,char*,int,char**,char**,char*,char**,char*);
		~race();
		char* get_name();
		char* get_size();
		int get_base_speed();
		char** get_languages();
		char** get_languages_choice();
		char* get_fav_class();

		char** get_special();
		char* get_dm_notes();
		int get_languages_length();
		int get_languages_choice_length();
		void add_language(char*);

		bool read_file(char*, char*);
	    bool write_file(char*);
};

class race_selector
{
private:
	list_node<char*>* head;
	int count;

public:
	race_selector();
	race_selector(char* filename);
	~race_selector();
	void read_from_file(char* filename);
	char* get_race(int position);
	int get_num_races();
};


#endif