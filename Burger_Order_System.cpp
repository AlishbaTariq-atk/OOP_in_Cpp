#include <iostream>

using namespace std;

    int main(){
    char dec_1; //decison for order placement
    char dec_2; //decision to include fries and drink
    cout<<"Would you like to have a burger?\nEnter Y(or y) for yes/nOR N(or n) for NO: "<<endl;
    cin>>dec_1;
if(dec_1=='Y' || dec_1=='y'){
    cout<<"Would you like to add-on fries and cold drink for RS-200 Only?"<<endl;
    cin>>dec_2;
   if(dec_2=='Y' || dec_2=='y')
    cout<<"Bill= RS-700."<<endl;
   else if(dec_2=='N' || dec_2=='n')
     cout<<"Bill= RS-500."<<endl;
   else 
   cout<<"Invalid Input!";
   } 
else if(dec_1=='N' || dec_1=='n')
   cout<<"Bill= Rs-0";
else 
  cout<<"Inavlid Input!";

return 0;
}