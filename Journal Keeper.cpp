#include <iostream>
#include <fstream>

using namespace std;
int main()
{
   string line;
   fstream f;
   int option;

   

   while(option!=3)
   {
    cout<<"Please choose an option\n 1.Add an Entry to the journal.\n 2.Display the journal\n 3.Exit"<<endl;
    cin>>option;
    
    if(option==1)
    {
        f.open("journal.txt",ios::app);
        while(1)
        {
        cout<<"Enter a line : "<<endl;
        getline(cin>>ws,line);
            if(line!="-1")
            {
                f<<line<<endl;
            }
            else
            {
                break;
            }
        }
        f.close();

    }
    else if(option==2)
    {
        f.open("journal.txt",ios::in);
        while(getline(f,line))
        {
            cout<<line<<endl;
        }
        f.close();
    }
   
   }





    return 0;
}