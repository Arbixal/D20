/*********************************************************\
* spell.h                                                 *
* ===============                                         *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 05/10/04                                   *
* Description: A class to store information about         *
*                     character spells                    *
\*********************************************************/

#ifndef _spell_h_
#define _spell_h_

class Spell
{
	private:
		char* name;
		char* type;
		char* school;

		//char_int_pair level;

	public:
		
		Spell();
		Spell(char*, char*, char*);
		~Spell();

		void set_name(char*);
		void set_type(char*);
		void set_school(char*);
		void set_next(Spell);

		char* get_name();
		char* get_type();
		char* get_school();

		Spell *next;
};

#endif

//void add_spell(Spell **);
//void print_list(Spell *);
//void remove_spell();