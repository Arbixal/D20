/*********************************************************\
* item_list.h										      *
* ===============                                         *
* Project: D20 Character Generation                       *
* Created By: Mark Hellmund                               *
* Last Edited By:				                          *
* Last Edited:										      *
* Description: A class to store dynamic map of items      *
\*********************************************************/

#ifndef _ITEM_LIST_H
#define _ITEM_LIST_H

#include "items_class.h"
#include <fstream>
#include <map>
using namespace std;

//empty pair to return should a search fail
const pair<int,item*> request_invalid(0,NULL);

//required for the map to sort and order char* keys
struct ltstr
{
  bool operator()(char* s1, char* s2) const
  {
    return strcmp(s1, s2) < 0;
  }
};


	

class item_list
{
private:
	map<char*,pair<int,item*>,ltstr >* itemlist;
	friend class map;

public:
	
	item_list();
	~item_list();
	pair<int,item*> operator[] (char* thekey);

	void add_item(pair<char*,pair<int,item*> > i_pair);
	bool remove_item(char* i_name);
	void clear();

	map<char*,pair<int,item*>,ltstr >::iterator begin();
	map<char*,pair<int,item*>,ltstr >::iterator end();
	
	void write_to_file(char* filename);
	bool read_from_file(char* filename);
	
	void output();


};

#endif