/*********************************************************\
* feat_list.h                                             *
* ===========                                             *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 07/09/04                                   *
* Description: A linked list of individual feats so-as to *
*              provide a method for manipulating the list *
\*********************************************************/
#ifndef _FEAT_LIST_H
#define _FEAT_LIST_H
#include "feats.h"

// Forward declaration of feat and profile
// (Required for referencing parent and child)
class feat;
class profile;

class feat_list
{
	private:
		list_node<feat*>* head;
		list_node<feat*>* end;
		profile* parent;
		int count;

	public:
		feat_list();
		feat_list(profile*);
		~feat_list();
		void link_parent(profile*);
		void clear_list();
		void remove_from_end();
		void remove_feat(char* name);
		void apply_feats();
		void apply_modifiers(modifier_node* head);
		void add_feat(char* description);
		int get_num_feats();
		char* get_feat_name(int);
		feat* get_pointer(int);
		feat* get_pointer(char*);
		feat* operator() (int);
		feat* operator() (char*);
		char* operator[] (int);

		void write_to_file(char* filename);
		int read_from_file(char* filename);
};

#endif
