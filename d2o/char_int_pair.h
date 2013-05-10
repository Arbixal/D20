/*********************************************************\
* char_int_pair.h                                         *
* ===============                                         *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 05/07/04                                   *
* Description: A class to create a dynamic linked list of *
*           character-integer pairs                       *
\*********************************************************/

#ifndef _CHAR_INT_PAIR_H_
#define _CHAR_INT_PAIR_H_

#include "char_int_group.h"
#include "modifier_node.h"
#include<vector>
using namespace std;

//const int MODIFIER_INVALID = -1234;

class char_int_group;

class char_int_pair
{
	private:
		char* pair_name;
		modifier_node* modifier;
		// Added: 20/05/2004 Caleb - These values help for 'get_explanation()'
		int max_modifier_length;
		int num_nodes;
		//
		char_int_group* parent;

	public:
		// Functions
		char_int_pair();
		char_int_pair(char*);
		// Added: 05/07/04 Caleb - To allow for copying and returning char_int_pairs
		char_int_pair(const char_int_pair&);
		//
		~char_int_pair();

		void set_name(char*);

		int get_total();
		char* get_name();
		// Added: 23/05/2004 Caleb - To allow for external dynamic memory allocation
		// the size of the allocated memory is required
		int get_explanation_size();
		//
		void get_explanation(char*);

		void add_modifier(char*, int);
		void remove_modifier(char*);
		void reset_modifiers();
		int get_modifier(char*);
		void set_modifier(char*, int);
		void increment_modifier(char*);
		void decrement_modifier(char*);

		int operator[] (char*);
		// Added: 05/07/04 Caleb - To allow for easier sorting and comparisons
		char_int_pair& operator= (const char_int_pair);
		bool operator== (char*);
		bool operator!= (char*);
		bool operator< (char*);
		bool operator> (char*);
		bool operator<= (char*);
		bool operator>= (char*);
		vector<pair<char*,int> > get_vec();
		//

		void link_parent(char_int_group* parent_class);

		friend class char_int_group;
};

#endif
