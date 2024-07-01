using namespace std;
#include <iostream>
#include <string>
#include "class.h"




 Fav_Songs::Fav_Songs(int size)
    {
        albumsize=size;
        album=new string[albumsize];
    }

    //copy-constructor defined
    Fav_Songs::Fav_Songs(Fav_Songs &s)
    {
        cout<<"\nBackUp for Songs created successfully!\n"<<endl;
        album=new string[albumsize];
        albumsize=s.getsize();

        //populating the new array
        for(int i=0;i<albumsize;i++)
        {
            album[i]=s.album[i];
        }
    }

    //destructor defined
    Fav_Songs::~Fav_Songs()
    {
        cout<<"\nObject destroyed!\n"<<endl;
        delete[] album;
    }

    //setter defined
    void Fav_Songs::setvalue(int index,string song_name)
    {
        album[index]=song_name;
    }

    void Fav_Songs::setsize(int size)
    {
        albumsize=size;
    }

    //getter defined
    string Fav_Songs::getvalue(int index)const
    {
        return album[index];
    }

    int Fav_Songs::getsize()
    {
        return albumsize;
    }

    //methods defined
    void Fav_Songs::addsongs(string song_name)
    {
        //album[getsize()-1]=song_name;
        string* new_album=new string[albumsize+1];

        for(int i=0;i<albumsize;i++)
        {
            new_album[i]=album[i];
        }
    
        new_album[albumsize]=song_name;

        delete[] album;
        album=new_album;
        albumsize++;
        
        
        
    }

    void Fav_Songs::deletesong(string song_name)
    {
        
        int index = -1;
            for (int i = 0; i <albumsize; i++) {
                if (album[i] == song_name) {
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                string *temp = new string[albumsize-1];
                for (int i=0,j=0;i<albumsize;i++) {
                    if (i != index) {
                        temp[j]=album[i];
                        j++;
                    }
                }
        
        //count++;
        delete[] album;
        album=temp;
        albumsize--;

        cout<<"Song deleted successfully!"<<endl;
        cout<<endl;
        // if(count==0)
        // {
        //     cout<<"Song name not found!"<<endl;
        }
    }

    void Fav_Songs::updatesong(string song_name)
    {
        string new_songname;
        int count=0;
        for(int i=0;i<albumsize;i++)
        {
            if(album[i]==song_name)
            {
                cout<<"Enter new song name: "<<endl;
                getline(cin>>ws, new_songname);
                album[i]=new_songname;
                cout<<"The song name has been updated successfully!"<<endl;
                count++;
            }
            
        }
        if(count==0)
            {
                cout<<"Song name not found!"<<endl;
            }
    }

    void Fav_Songs::printalbum()const
    {
        cout<<endl;
        cout<<"The songs are : "<<endl;
        for(int i=0;i<albumsize;i++)
        {
            
            cout<<album[i]<<endl;
           
        }
        cout<<endl;

    }