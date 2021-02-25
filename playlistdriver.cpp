//
//  playlistdriver.cpp
//  Project_0_250
//
//  Created by Himanshi Gidwani on 2021-01-26.
//

#include <iostream>

using namespace std;



#include <stdio.h>

using namespace std;



#include <string.h>

using namespace std;



#include "playlistdriver.h"   // class that stores data members and services provided by the playlistdriver
#include <string>





int main() {



    playlistdriver p1;

    listentry l1;


    string cmd;



    do{

//        std::cout<<"Enter a command: ";

        std::cin>>cmd;



        if(cmd == "m"){

            int n;

//            std::cout<<"Enter the size for playlist";

            std::cin>>n;

            p1.set_size(n);


        }





       if(cmd == "i"){



           string s;

//           std::cout<<"Enter song and artist";
           cin.ignore();
           std::getline(cin,s);
           p1.add_song(l1.get_entry(s));
        }



        if(cmd == "p"){

            int k;

            std::cin>>k;

            p1.play_song(k);

        }



        if(cmd == "e"){



            int l;

            std::cin>>l;

            p1.delete_song(l);

        }


        if(cmd == "exit"){

            break;

        }
        

    }while(cmd.compare("exit")!= 0);



return 0;



}

