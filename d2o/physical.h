/*********************************************************\
* physical.h                                              *
* =============                                           *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 21/05/04                                   *
* Description: A class to store information about the     *
*           characters physical attributes.               *
\*********************************************************/

#ifndef _PHYSICAL_H_
#define _PHYSICAL_H_

class physical
{
	private:
		char* char_name;
		char* player_name;
		char* gender;
		char* height;
		char* weight;
		char* hair;
		char* eyes;
		char* skin;
		char* age;
		char* god;
		char* alignment;

	public:
		physical();
		~physical();
		void set_char_name(char*);
		void set_player_name(char*);
		void set_gender(char*);
		void set_height(char*);
		void set_weight(char*);
		void set_hair(char*);
		void set_eyes(char*);
		void set_skin(char*);
		void set_age(char*);
		void set_god(char*);
		void set_alignment(char*);

		char* get_char_name();
		char* get_player_name();
		char* get_gender();
		char* get_height();
		char* get_weight();
		char* get_hair();
		char* get_eyes();
		char* get_skin();
		char* get_age();
		char* get_god();
		char* get_alignment();

		void save_character(char*);
};

#endif

