/*********************************************************\
* feats.h                                                 *
* =======                                                 *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 29/08/04                                   *
* Description: A class to store and control the feats     *
*              a character has                            *
\*********************************************************/
#ifndef _FEAT_H
#define _FEAT_H
#include "modifier_node.h"
#include "feat_list.h"

// Forward declaration of feat_list
class feat_list;

class feat
{
	private:
		char* name;
		char* feat_string;
		modifier_node* effects;
		feat_list* parent_list;

	public:
		feat();
		feat(char*);
		feat(feat_list*);
		~feat();
		void use_description(char*);
		void apply_modifiers();
		void clear_lists();
		char* get_name();
		char* get_feat_string();

		friend class feat_list;
};
#endif
