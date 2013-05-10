/*********************************************************\
* modifier_node.h                                         *
* =================                                       *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 18/05/04                                   *
* Description: A node structure for use in the classes    *
*        char_int_pair and char_int_group                 *
\*********************************************************/

#ifndef _MODIFIER_H_
#define _MODIFIER_H_

struct modifier_node
{
	char* modifier_name;
	int value;
	modifier_node* next;
};

template <class T> struct list_node
{
	T node_value;
	list_node* next;
};

#endif
