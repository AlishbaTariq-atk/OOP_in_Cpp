#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

void vowel_count(string str);
void vowel_cons(string str);
void most_freq(string str);
void concat(string str);

int main(){
  string str;
  char x;

  cout<<"Enter string :"<<endl;
  getline(cin,str);

  for(x ; x!='e' ;){
  cout<<"\nEnter one of the following characters to perform the specified task:\n A) Count the number of vowels in the string\n B) Count both the vowels and consonants in the string\n C) Display the most frequent character in the string.\n D) Concatenate another string with the existing string.\n E) Exit the program.: "<<endl;
  cin>>x;
  if(x=='A')
 vowel_count(str);
else if(x=='B')
 vowel_cons(str);
else if(x=='C')
 most_freq(str);
else if(x=='D')
 concat(str);
else if(x=='E')
 break;
  }
  

    return 0;
}
void vowel_count(string str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        count++;
    }
    cout<<"Vowel Count="<<count;
}
void vowel_cons(string str){
    int vow=0,con=0;
    for(int i=0;str[i]!='\0';i++){
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        vow++;
            break;
        
        default:
        con++;
            break;
        }
    }
    cout<<"\nVowel count= "<<vow<<endl;
    cout<<"\nConsonant count= "<<con<<endl;
}
void most_freq(string str){
    int count=0, max_count=0;
    string freq;
    for(int i=0;str[i]!=0;i++){
        for(int j=i+1;str[j]!=0;j++){
            if(str[i]==str[j]){
                count++;
                if(count>max_count){
                    max_count=count;
                    freq=str[i];
                }   
            }
        }
    }

 cout<<"\nMOst frequent character = "<<freq<<endl;
}
void concat(string str){
    string str_2,str_3;
    cout<<"\nEnter a new string to concatenate :"<<endl;
    getchar();
    getline(cin, str_2);
   // strcat(new,str);
    str_3=str + " " + str_2;
    cout<<"\nNew string= "<<str_3<<endl;
    cout<<"\nOld string = "<<str<<endl;
}