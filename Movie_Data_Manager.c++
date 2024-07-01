#include<iostream>
#include<string>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int year_released;
};
MovieData createMovieData(MovieData m);
void displayMovieData(MovieData m);
int main(){

 MovieData m1; 
//MovieData m2;

for(int i=1;i<=2;i++){   //loop for storing 2 movies data
MovieData movie=createMovieData(m1);
cout<<endl<<"DETAILS FOR MOVIE ("<<i<<"): "<<endl;
displayMovieData(movie);
cout<<endl;
}
//MovieData second=createMovieData(m2);
//displayMovieData(second);

    return 0;
}
MovieData createMovieData(MovieData m){
   cout<<"Enter title ,director and the year released for a movie:  "<<endl;
   
   getline(cin,m.title);
   getline(cin,m.director);
   cin>>m.year_released;
   getchar();

   return m;

}
void displayMovieData(MovieData x){

cout<<"Title : "<<x.title<<endl;
cout<<"Director : "<<x.director<<endl;
cout<<"Year Released : "<<x.year_released<<endl;

}