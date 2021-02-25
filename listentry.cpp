//
//  listentry.cpp
//  Project_0_250
//
//  Created by Himanshi Gidwani on 2021-01-26.
//

/*

song artist

constructor

getter

isequal

case insensitive

boost

transform

*/





#include <iostream>

using namespace std;



#include <stdio.h>



#include <string.h>

using namespace std;



#include "playlistdriver.h"

using namespace std;



listentry::listentry(){

    song = "";

}



string listentry::get_entry(string entry){

    song = entry;

    return song;

}
