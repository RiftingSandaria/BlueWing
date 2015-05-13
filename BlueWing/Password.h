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


class Password
{
private:
    string websiteName;
    string userName;
    string entry;
public:
    friend bool operator == (const Password pas1, const Password pas2);
    friend bool operator != (const Password pas1, const Password pas2);
    friend ostream& operator << (ostream& outs, Password pas);
    friend istream& operator >> (istream& ins, Password pas);
};



#endif /* defined(__BlueWing__Memory_mangement__) */
