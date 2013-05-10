#include "char_class.h"
#include "modifier_node.h"

class profile;

class class_list
{
private:
	list_node<char_class*>* head;
	list_node<char_class*>* end;
	profile* parent;
	int count;
	int solid;

public:
	class_list();
	~class_list();
	void clear_list();
	void link_parent(profile* new_parent);
	int get_num_classes();
	int get_num_solid();
	int get_num_unique();
	char* get_unique_class(int position);
	char* get_class(int position);
	char_class* get_pointer(int position);
	char_class* get_pointer(char* name);
	void add_class(char_class* new_class);
	int get_total_level();
	char_class* get_head();
	char_class* get_tail();
	int get_num_specific_class(char* name);
	void solidify();
	void remove_from_tail();
	bool is_solid();
};
