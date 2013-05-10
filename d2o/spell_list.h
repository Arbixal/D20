/*********************************************************\
* spell_list.h                                            *
* ===============                                         *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 09/10/04                                   *
* Description: A class to create a dynamic linked list of *
*           character spells                              *
\*********************************************************/

#ifndef _spell_list_h_
#define _spell_list_h_

#include "spell.h"

class Spell_list
{
	private:
		Spell* head;
		int count;

	public:
		Spell_list();
		~Spell_list();

		void add_spell(Spell*);
		void remove_spell(char*);
		void print_list();
		void clear_list();
				
		char* operator[](int);
		Spell* get_pointer(int);
		Spell* get_pointer(char*);
		char* get_spell_name(int);
		int get_num_spells();
		Spell* operator() (int);
		Spell* operator() (char*);

		int write_to_file(char* filename);
		int read_from_file(char* filename);
};

#endif