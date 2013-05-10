/*********************************************************\
* item_list.cpp                                           *
* ===============                                         *
* Project: D20 Character Generation                       *
* Created By: Mark Hellmund                               *
* Last Edited By:				                          *
* Last Edited:											  *
* Description: A class to store dynamic map of items      *
\*********************************************************/
#include "stdafx.h"
#include "item_list.h"
/*********************************************************\
* item_list()					                          *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: An initialisation constructor to set the   *
*              map and allocate some memory for an        *
*			   instance									  *
\*********************************************************/
item_list::item_list()
{
	itemlist = new map<char*,pair<int,item*>,ltstr >;
}


/*********************************************************\
* ~item_list()											  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: Destructor to free dynamic memory in the   *
*			   list. It first deletes the items then it   *
*              clears the map							  *
\*********************************************************/
item_list::~item_list()
{
	//remove item entries
map<char*,pair<int,item*>,ltstr >::iterator iter;
	iter = itemlist->begin();
	while(iter != itemlist->end())
	{
		delete iter->second.second;
		iter++;
	}

	itemlist->clear();	//clear from map class


	delete itemlist;
}
/*********************************************************\
* pair<int,item*> operator[] (char* thekey)				  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Parameter 1: A char* corresponding to the new name of   *
*              the key, which is the name of the item     *
* Returnvalue: Returns a pair of number of items and a    *
*			    pointer to an item object				  *
* Description: Function to find a pair of item and the    *
*			   number of items there are. If the item     *
*              doesn't exist it returns a null entry	  *
\*********************************************************/
pair<int,item*> item_list::operator[] (char* thekey)
{
	map<char*,pair<int,item*>, ltstr>::iterator iter;
	iter = itemlist->find(thekey);
	if(iter != itemlist->end())
		{
			return iter->second;
		}
return request_invalid;
}
/*********************************************************\
* void add_item(pair<char*,pair<int,item*> > i_pair)	  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Parameter 1: A pair, containing the number of items and *
*			   a pointer to the item type.			      *
* Description: Adds items to the map					  *
\*********************************************************/
void item_list::add_item(pair<char*,pair<int,item*> > i_pair)
{

	map<char*,pair<int,item*>, ltstr>::iterator iter;

	iter = itemlist->find(i_pair.first);
	

		if(iter != itemlist->end())
		{
			iter->second.first= iter->second.first + i_pair.second.first;
			delete i_pair.second.second;
		}
		else
		{
			itemlist->insert(i_pair);
		}
}
/*********************************************************\
* bool remove_item(char* i_name)				      	  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Parameter 1: A pair, containing the number of items and *
*			   a pointer to the item type.			      *
* Returnvalue: Returns a bool to indicate whether the item*
*			   could be removed							  *
* Description: Adds items to the map					  *
\*********************************************************/
bool item_list::remove_item(char* i_name)
{

map<char*,pair<int,item*>, ltstr>::iterator iter;

	iter = itemlist->find(i_name);

	if(iter != itemlist->end())
		{
			delete iter->second.second;
			itemlist->erase(iter);
			return 1;
		}
	
return 0;
}
/*********************************************************\
* void clear()									      	  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: Removes all items in the map				  *
\*********************************************************/
void item_list::clear()
{
	map<char*,pair<int,item*>,ltstr >::iterator iter;
	iter = itemlist->begin();
	while(iter != itemlist->end())
	{
		delete iter->second.second;
		iter++;
	}
	itemlist->clear();
}

/*********************************************************\
* map<char*,pair<int,item*>,ltstr >::iterator begin()	  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Returnvalue: Returns an iterator to the beginning of the*
*			   map for parsing thru it					  *
* Description: Adds items to the map					  *
\*********************************************************/
map<char*,pair<int,item*>,ltstr >::iterator item_list::begin()
{
	return itemlist->begin();
}
/*********************************************************\
* map<char*,pair<int,item*>,ltstr >::iterator end() 	  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Returnvalue: Returns an iterator to the end of the map  *
*			   for parsing thru it					      *
* Description: Adds items to the map					  *
\*********************************************************/
map<char*,pair<int,item*>,ltstr >::iterator item_list::end()
{
	return itemlist->end();
}
/*********************************************************\
* void item_list::write_to_file(char* filename)			  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Parameter 1: A char* that is the name of the file to be *
*			   written to							      *
* Description: writes the list of items to a file		  *
\*********************************************************/
void item_list::write_to_file(char* filename)
{
	ofstream fout(filename);
	 if (fout == 0) 
	 {
      cerr<<"Error! Couldn't open output file for writing"<<endl;
      exit(0);
	 }

	 map<char*,pair<int,item*>,ltstr >::iterator parse;
	 parse = itemlist->begin();
	 while (parse != itemlist->end())
	 {
		 fout<<parse->second.first<<endl;
		 fout<<parse->second.second->get_item_base_material()<<endl;
		 fout<<parse->second.second->get_item_currency()<<endl;
		 fout<<parse->second.second->get_item_description()<<endl;
		 fout<<parse->second.second->get_item_masterwork()<<endl;
		 fout<<parse->second.second->get_item_name()<<endl;
		 fout<<parse->second.second->get_item_price()<<endl;
		 fout<<parse->second.second->get_item_type()<<endl;
		 fout<<parse->second.second->get_item_weight()<<endl;

		 parse++;
	 }
	 fout.close();
}
/*********************************************************\
* bool read_from_file(char* filename)				      *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Parameter 1: A char* that is the name of the file to be *
*			   read from							      *
* Returnvalue: Returns a bool to indicate whether the file*
*			   read was successful						  *
* Description: Parses data from a text file into the item *
*			   list										  *
\*********************************************************/
bool item_list::read_from_file(char* filename)
{
	char buffer[128];
	int input_tally;
	
	item* inputted_item;
	//inputted_item = new item();

	pair<int,item*> _pair;
	pair<char*,pair<int,item*> > insert_pair;

	ifstream fin(filename);
	if (fin == 0) 
	{
		return false;
	}

	while(!fin.eof())
	{

		fin.getline(buffer,128);
		input_tally = atoi(buffer);
		if(!fin.eof())
		{
			inputted_item = new item();
			fin.getline(buffer,128);
			inputted_item->set_item_base_material(buffer);
			fin.getline(buffer,128);
			inputted_item->set_item_currency(buffer);
			fin.getline(buffer,128);
			inputted_item->set_item_description(buffer);
			fin.getline(buffer,128);
			inputted_item->set_item_masterwork(atoi(buffer));
			fin.getline(buffer,128);
			inputted_item->set_item_name(buffer);
			fin.getline(buffer,128);
			inputted_item->set_item_price(atoi(buffer));
			fin.getline(buffer,128);
			inputted_item->set_item_type(buffer);
			fin.getline(buffer,128);
			inputted_item->set_item_weight(atoi(buffer));
			
			_pair.first=input_tally;
			_pair.second=inputted_item;
			insert_pair.first=inputted_item->get_item_name();
			insert_pair.second=_pair;
			this->add_item(insert_pair);
		}		
	}

	fin.close();
	
	 
	 return true;
}


/*********************************************************\
* void output()									      	  *
* ------------------------------------------------------- *
* Created By: Mark Hellmund                               *
* Last Edited By:                                         *
* Last Edited:                                            *
* Description: simple test function for outputting		  *
\*********************************************************/
void item_list::output()
{
	
	map<char*,pair<int,item*>,ltstr >::iterator mapiter = itemlist->begin();
	while(mapiter != itemlist->end())
	{
		cout<<"key: "<<mapiter->first<<endl;
		cout<<"tally: "<<mapiter->second.first<<endl;
		cout<<"item name: "<<mapiter->second.second->get_item_name()<<endl;
		cout<<"price: "<<mapiter->second.second->get_item_price()<<endl;
		cout<<endl;

		mapiter++;
	}
}