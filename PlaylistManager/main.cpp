#include <iostream>
#include <cstring>
#include "class.h"

using namespace std;



 int main()
    {
        Fav_Songs s1(0);
        int size;
        int option;
        string song_name;

        cout<<"Enter song to create a playlist: "<<endl;
        getline(cin>>ws, song_name);
        s1.addsongs(song_name);
       
    while(1)
    {
        cout<<"What modifications would you like to perform: \n1.Add Song \n2.Delete Song \n3.Update Song \n4.print all songs \n5.Create Backup \n6.Exit ?"<<endl;
        cin>>option;
       

        if(option==1)
        {
            cout<<"Enter new song name: "<<endl;
            getline(cin>>ws ,song_name);
            s1.addsongs(song_name);
        }
        else if(option==2)
        {
            cout<<"Enter the song name you want to delete"<<endl;
            getline(cin>>ws, song_name);
            s1.deletesong(song_name);
            
        }
        else if(option==3)
        {
            cout<<"Enter the song name you want to update: "<<endl;
            getline(cin>>ws, song_name);
            s1.updatesong(song_name);

        }
        else if(option==4)
        {
            s1.printalbum();
        }
        else if(option==5)
        {
            Fav_Songs s2 = s1;
        }
        else if(option==6)
        {
            break;
        }
        else
        {
            cout<<"Invalid Option!"<<endl;
        }

    }
        return 0;
    }