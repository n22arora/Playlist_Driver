//
//  listentry.cpp
//  Project_0_250
//
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
