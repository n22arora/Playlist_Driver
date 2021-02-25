//
//  playlistdriver.h
//  Project_0_250
//
//  Created by Himanshi Gidwani on 2021-01-26.
//

/*#ifndef playlistdriver_h
#define playlistdriver_h


#endif playlistdriver_h */

/**

    ECE250

    Playlistdriver.h

    Purpose: Class to represent a playlistdriver.

    Provides services to add a song to the list, select a song from the list to play, and delete a song from the playlist.



    Author Navya Arora

    Version 1.0  - 21/01/2021

*/



#include <iostream>



#include <stdio.h>



#include <string.h>



// Playlist for songs using an array



class playlistdriver {



    // class variables

    private:

    int size ;                  // size of the playlist
    
    int counter= 0;
    string *playlist;           // playlist of size 'size'



    // class functions

    public:

    void set_size(int n);

    void add_song(string song);

    void play_song(int k);

    void delete_song(int y);
    
    int str_len(string s);


};



class listentry{

    private:

    string song;



    public:

    string get_entry(string entry);

    listentry();



};

