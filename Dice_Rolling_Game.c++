#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Dice
{
private:
   int value=0;
public: 

  void setvalue(int val){
    value=val;
    //return val;
  }  

  int roll(){
    srand(time(NULL));
    value=(rand() % 6) + 1;

    return value;
  } 
  int getvalue(){

    return value;
  }
};

int main(){
   char option;
   Dice d;

   while(1){
    cout<<"Do you want to roll the dice? Y/N"<<endl;
    cin>>option;
    if(option=='Y' || option=='y'){
        if(d.roll()==6)
        {
            cout<<"Side is : "<<d.getvalue()<<"(Chakkkkaaaa!)"<<endl;
        }
        else
        {
            cout<<"Side is : "<<d.getvalue()<<"(Better luck next time!)"<<endl;
        }
    }
    else if(option=='N' || option=='n')
    {
        break;
    } 
    else
    {
        cout<<"Kindly enter valid  option."<<endl;   
    }
     

     }


    
}
