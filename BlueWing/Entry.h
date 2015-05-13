//
//  Memory_mangement.h
//  BlueWing
//
//  Created by Adish Betawar on 5/12/15.
//  Copyright (c) 2015 Mega Saga Industries. All rights reserved.
//

#ifndef __BlueWing__Memory_mangement__
#define __BlueWing__Memory_mangement__

#include "EaseOfAccesss.h"


class Entry
{
private:
    string websiteName;
    string userName;
    string password;
public:
    friend bool operator == (const Entry pas1, const Entry pas2);
    friend bool operator != (const Entry pas1, const Entry pas2);
    friend ostream& operator << (ostream& outs, Entry pas);
    friend istream& operator >> (istream& ins, Entry pas);
};



#endif /* defined(__BlueWing__Memory_mangement__) */
