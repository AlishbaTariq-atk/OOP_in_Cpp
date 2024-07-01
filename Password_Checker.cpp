#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int pass_check(string a);
int main(){
  string name,pass,r_pass;
  int result;
  cout<<"Enter your name: "<<endl;
  getline(cin,name);
  do
  {
    cout<<"Enter a password having the following conditions: \n 1.must contain 8 characters(not less or more) \n 2.must contain atleast one of the following symbols (%, !, *, ^, &)"<<endl;
    cin>>pass;
    result=pass_check(pass);
  } while (result==1);
  
if(result==0){
    
 do
 {
    cout<<"Renter the same valid password for confirmation."<<endl;
    cin>>r_pass;
   
 } while (pass!=r_pass);
    
   if(pass==r_pass)
    cout<<"Your are amazing!"<<endl;  
}


    return 0;
}
int pass_check(string pass){
//checking for 8 characters
int size=pass.size();
if(size!=8){
    return 1;
}
//checking for atleast one symbol
else {
   int count=0;
for(int i=0;i<=pass.length();i++){
    switch (pass[i])
    {
    case '%':
    count++;
        break;
    case '!':
    count++;
        break;
    case '*':
    count++;
        break;
    case '^':
    count++;
        break;
    case '&':
    count++;
        break;               
    }
}
cout<<endl<<count;
 if(count>0){
 return 0;
 }
 else
 return 1;
}

}