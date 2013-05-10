/*********************************************************\
* xp.cpp                                                  *
* =============                                           *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 24/05/04                                   *
* Description: Class functions to access or adjust a      *
*           characters experience points  .               *
\*********************************************************/
#include "stdafx.h"
#include "xp.h"

xp::xp() // Default constructor
{
	experience = 0;
}

xp::xp(long xp_value)  // Initialisation constructor
{
	experience = xp_value;
}

xp::~xp()  // Destructor
{

}

void xp::adjust_xp(long value)
{
	if ((value < 0) && (experience < value))
		experience = 0;
	else
		experience += value;
}

long xp::get_xp()
{
	return experience;
}
