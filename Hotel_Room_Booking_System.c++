#include <iostream>

using namespace std;
void show_room(char arr[4][5]);
void book_room(char arr[4][5]);

int main(){
   char arr[4][5]={{'-','-','-','-','-'},{'-','-','-','-','-'}, {'-','-','-','-','-'},{'-','-','-','-','-'}};
   int order;
   cout<<"WELCOME TO THE HOTEL!"<<endl;
   do
   {
    cout<<" \n Enter one of the following numbers to proceed: \n1-show empty/booked rooms \n2-Book Room \n3-Exit: "<<endl;
    cin>>order;
    if(order==1)
     show_room(arr);
    else if(order==2)
     book_room(arr);
    else if(order==3)
    cout<<"Thanks for your time.";   
    else
    cout<<"Kindly choose from the menu!";   
   } while (order!=3);
   

    return 0;
}
void show_room(char arr[4][5]){
    cout<<"EMPTY ROOMS : - \nBOOKED ROOMS: * "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void book_room(char arr[4][5]){
    int floor,room,days,cost;
    cout<<"Enter floor in range 1-4"<<endl;
    cin>>floor;
    if(floor==1 || floor==2){
        cout<<"Enter a room with in the range 1-5 in order to book: "<<endl;
        cin>>room;
        if(arr[floor-1][room-1]=='-'){
            cout<<"For how many days you would like the room to be booked?"<<endl;
            cin>>days;
            cost=days * 10000;
            arr[floor-1][room-1]='*';
            cout<<"Your room has been booked suucessfully with the detiails: \nFloor: "<<floor<<" Room: "<<room<<"\nCost: RS- "<<cost;
        }
        else {
            cout<<"Sorry the room has already been booked.Kindly choose another."<<endl;
        }
    }
    else if(floor==3 || floor==4){
        cout<<"Enter a room with in the range 1-5 in order to book: "<<endl;
        cin>>room;
        if(arr[floor-1][room-1]=='-'){
            cout<<"For how many days you would like the room to be booked?"<<endl;
            cin>>days;
            cost=days * 6000;
            arr[floor-1][room-1]='*';
            cout<<"Your room has been booked suucessfully with the detiails: \nFloor: "<<floor<<" Room: "<<room<<"\nCost: RS- "<<cost<<endl; 
    }   
    }
    else 
    cout<<"Kindly enter valid data."<<endl;
}