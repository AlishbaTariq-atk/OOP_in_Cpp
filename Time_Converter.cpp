#include <iostream>

using namespace std;

int main(){
  
    int seconds,hrs,min,sec;
    cout<<"Enter time in seconds: "<<endl;
    cin>>seconds;
    hrs=seconds/3600;
    sec=seconds%3600;
    min=sec/60;
    sec=sec%60;
    cout<<"Hours:"<<hrs<<"  Min:"<<min<<" Sec:"<<sec<<endl;

    return 0;
}
