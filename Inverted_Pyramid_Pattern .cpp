#include <iostream>

using namespace std;

int main(){
 
 int num;
 cout<<"Enter a number if row on which to invert the pattern: "<<endl;
 cin>>num;
 for(int i=1;i<=num;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
for(int i=num-1;i>=0;i--){
    for(int j=i;j>0;j--){
        cout<<"*";
    }
    cout<<endl;
}



    
}