#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   float weight,height,BMI;
   cout<<"-----BMI CALCULATOR------"<<endl;
   cout<<"Enter your weight and height to calculate your BMI: "<<endl;
   cin>>weight>>height;
   BMI=weight/(height*height);
   cout<<"BMI="<<setprecision(5)<<BMI<<endl;

    return 0;
}