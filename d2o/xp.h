/*********************************************************\
* xp.h                                                    *
* =============                                           *
* Project: D20 Character Generation                       *
* Created By: Mavis Shaw                                  *
* Last Edited By: Mavis Shaw                              *
* Last Edited: 24/05/04                                   *
* Description: A class to store information about the     *
*           characters experience points  .               *
\*********************************************************/

#ifndef _XP_H_
#define _XP_H_

class xp
{
	private:
		long experience;
	
	public:
		xp();
		xp(long);
		~xp();		

		void adjust_xp(long);
		long get_xp();
};

#endif
