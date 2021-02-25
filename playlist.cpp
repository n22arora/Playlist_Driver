//
//  playlist.cpp
//  Project_0_250
//
//  Created by Himanshi Gidwani on 2021-01-26.
//

#include <iostream>

using namespace std;

#include <cstring>
using namespace std;


#include <stdio.h>

using namespace std;

#include <ctype.h>


#include <string>

using namespace std;



#include "playlistdriver.h"





    void playlistdriver::set_size(int n){

        size = n;

        playlist = new string[size];
        
        for(int i=0; i<size ; i++){
            playlist[i]=" ";
        }
        std::cout<<"success"<<std::endl;

    }
    
int playlistdriver :: str_len(string s){
    
    int len = 0;
    len = s.length();
    return len;
    
}

//char playlistdriver :: to_lower(char ch1){
//
//    char ch = '\0';
//
//    ch = tolower(ch1);
//
//    return ch;
//}


    void playlistdriver::add_song(string song){
        
//        int song_is_there=0;
//        int p = 0;
        
        int is_equal = 0;
        
        if(playlist[0]==" "){
            playlist[0]=song;
            counter = 1;
            std::cout<<"success"<<std::endl;
            return;
            
        }
        
        if(playlist[0] != " "){
            counter = 0;
            for(int i=0; i<size ; i++){
                if(playlist[i].compare(" ") != 0){
                    counter++;
                }
            }
        }
        
        if(counter >0){
            
            for(int p=0; p< size ; p++){
                
                if(str_len(song) == str_len(playlist[p]))
                {
                    for(int h =0 ; h< str_len(song) ; h++){
                        if((tolower(song[h]) == tolower((playlist[p])[h]))){
//                            std::cout<<"can not insert "<<song<<std::endl;
                            is_equal =1;
                        }
                        else {
                            is_equal=0;
                        }
                    }
                }
                
            }
            
            if(is_equal == 1){
                std::cout<<"can not insert "<<song<<std::endl;
            }
        }
            
        
        if(is_equal != 1 && counter < size){
            playlist[counter] = song;
            counter++;
            std::cout<<"success"<<std::endl;
        }
        else if(is_equal != 1 && counter>= size){
            std::cout<<"can not insert "<<song<<std::endl;
        }
        else{
            return;
        }
}
        

        void playlistdriver::play_song(int k){

            int pos_n = k;
            
            if(pos_n>size || pos_n == 0 || pos_n<0){
                std::cout<<"can not play "<<pos_n<<std::endl;
            }


            if (pos_n <= size && pos_n>0){

                if( playlist[pos_n-1].compare(" ") !=0){

                    std::cout<<"played "<<pos_n<<" "<<playlist[pos_n-1]<<std::endl;

                }else if(playlist[pos_n-1].compare(" ")==0){
                    std::cout<<"can not play "<<pos_n<<std::endl;
                }
                else{
                    return;
                }
            }
            
        }
//            if (pos_n <= size && pos_n >0 ){
//                if(playlist){
//
//                }
//            }
            
//            if(playlist[pos_n-1] == " " || pos_n == 0 || pos_n > size){
//
//                    std::cout<<"can not play "<<pos_n<<std::endl;
//
//                }








        void playlistdriver::delete_song(int y){



        int pos_n = 0;
        pos_n = y;
            int flag = 0;
            
            if(playlist[0].compare(" ") != 0){
                counter = 0;
                for(int i=0; i<size ; i++){
                    if(playlist[i].compare(" ") != 0){
                        counter++;
                    }
                }
            }

             if( pos_n>size || pos_n<=0 || counter ==0){
                std::cout<<"can not erase "<<pos_n<<std::endl;
                }
            
            if(pos_n > 0 && pos_n <= size && counter > 0){

                if(playlist[pos_n-1].compare(" ")==0){
                    std::cout<<"can not erase "<<pos_n<<std::endl;                
                }
                else {
                        playlist[pos_n-1] = " ";
                        
                        for(int p = pos_n-1; p <counter-1 ; p++){
                            playlist[p] = playlist[p+1];
                        }
                        playlist[counter-1] = " ";
                        std::cout<<"success"<<std::endl;
                        counter--;
                        }
                }
        }
            
        //      if( pos_n>size || pos_n<=0 || counter ==0){
        //         std::cout<<"can not erase "<<pos_n<<std::endl;
        //         }
            
        //     if(pos_n > 0 && pos_n <= size){
        //         if(playlist[pos_n-1].compare(" ")==0){
        //             std::cout<<"can not erase "<<pos_n<<std::endl;
        //         flag =1;
                
        //         }else {
        //             flag =0;
        //         }

        //     }
            
        //     if(flag == 0 && counter>0){
        //     for(int m = 0 ; m < counter ; m++ ){
        //         if(m == pos_n-1){
        //             playlist[m] = " ";
                    
        //             for(int p = m; p <counter ; p++){
        //                 playlist[p] = playlist[p+1];
        //             }
        //             playlist[counter-1] = " ";
        //             std::cout<<"success"<<std::endl;
        //             counter--;
        //         }
        //     }
        // }


