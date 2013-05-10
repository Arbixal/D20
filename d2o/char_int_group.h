/*********************************************************\
* char_int_group.h                                        *
* ================                                        *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 07/09/04                                   *
* Description: A class to create a dynamic linked list of *
*           character-integer pairs                       *
\*********************************************************/

#ifndef _CHAR_INT_GROUP_H_
#define _CHAR_INT_GROUP_H_

#include "char_int_pair.h"

// Forward declaration of the profile class
class profile;
class char_int_pair;

class char_int_group
{
	private:
		char* group_name;
		char_int_pair* dynamic_pairs;
		int num_pairs;

		// Added: 07/09/2004 Caleb - Allow for communication between the profile
		//                           class and this one
		profile* parent;
		//

		void group_quick_sort(char_int_pair* pair_array, int length);
		void group_quick_pivot(char_int_pair* pair_array, int length, int&pivot_index);


	public:
		char_int_group();
		char_int_group(char*);

		// Added: 07/09/2004 Caleb - Allow for communication between the profile
		//                           class and this one
		char_int_group(profile*);
		//

		~char_int_group();
		void read_file(char*);

		// Added: 07/09/2004 Caleb - Allow for communication between the profile
		//                           class and this one
		void link_parent(profile*);
		//

		int get_num_pairs();

		int operator[] (char* pair_name);
		int operator[] (int pair_number);
		int get_value(char* pair_name);
		int get_value(int pair_number);

		// Added: 29/06/2004 Caleb - Allow reference to individual char_int_pairs
		char_int_pair* operator() (char* pair_name);
		char_int_pair* operator() (int pair_number);
		char_int_pair* get_pointer (char* pair_name);
		char_int_pair* get_pointer (int pair_number);
		//

		//void add_modifier(char*, int);  // Edited out 29/06/2004 - Caleb
		void apply_modifiers();

		// Added: 07/10/2004 Caleb - Each class is responsible for reading and writing
		//                           to and from itself
		void write_to_file(char* filename);
		int read_from_file(char* filename);
		void break_down_line(char* buffer, char_int_pair* position);
		//
};

#endif
