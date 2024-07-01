//(YOU CAN RUN THE CODE USING "./project_2" AFTER COMPLILING)

#include<iostream>
#include "itemType.h"
using namespace std;

//functions declared
    void display_items(itemType items[],int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<"ITEM ("<<i+1<<") :"<<endl;
            cout<<"Id: "<<items[i].getid()<<endl;
            cout<<"Name: "<<items[i].getname()<<endl;
            cout<<"Price: "<<items[i].getprice()<<endl;
            cout<<"Quantity: "<<items[i].getquantity()<<endl;
            cout<<endl;
        }   
        }
        
    void update_items(itemType items[],int x)
    { 
        int opt;   
        cout<<"Do you want to update :\n 1). Price\n 2). Quantity :\n"<<endl;
        cin>>opt;
        if(opt==1)
        {
            float new_price;
            cout<<"Enter the new price: "<<endl;
            cin>>new_price;
            items[x-1].setprice(new_price);                 
        }
        else if(opt==2)
        {
            int new_quant;
            cout<<"Enter the new quantity: "<<endl;
            cin>>new_quant;
            items[x-1].setquantity(new_quant);
        }
        else
        {
            cout<<"Kindly choose valid option."<<endl;
        }
    }
    void item_search(itemType (items)[],int size,int ID)
    {
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(items[i].getid()==ID)
            {
                cout<<"Item details are following: "<<endl;
                items[i].item_details();
                count++;
            }
        }
        if(count==0)
        {
            cout<<"Items not found!"<<endl;
        }
        
    }
int main(){

    int size;   //size of items array
    int option; //menu option

    cout<<"Enter the no. of items: "<<endl;
    cin>>size;

    int id;
    string name;
    float price;
    int quantity;

    itemType items[size]; //array for items created

//taking data from user
    for(int i=0;i<size;i++)
    {
        cout<<"ITEM ("<<i+1<<"):"<<endl;
        cout<<"Enter id: "<<endl;
        cin>>id;
        items[i].setid(id);

        cout<<"Enter name: "<<endl;
        getchar();
        getline(cin,name);
        items[i].setname(name);

        cout<<"Enter price: "<<endl;
        cin>>price;
        items[i].setprice(price);

        cout<<"Enter quantity: "<<endl;
        cin>>quantity;
        items[i].setquantity(quantity);

        cout<<endl;
    }

//menu
    while(1)
    {
        cout<<"-----MENU-----"<<endl;   
        cout<<"Choose among the followings:\n 1). Display Items\n 2). Update item details\n 3). Search for items by ID\n 4). Exit"<<endl;
        cin>>option;
        if(option==1)
        {
            display_items(items,size);
        }
        else if(option==2)
        {
            int item_no;
            cout<<"Enter the item no. for which you would like an update: "<<endl;
            cin>>item_no;
            update_items(items,item_no);
            
        }
        else if(option==3)
        {
            int ID;
            cout<<"Enter item ID: "<<endl;
            cin>>ID;
            item_search(items,size,ID);
        }
        else if(option==4)
        {
            break;
        }
        else
        {
            cout<<"Kindly choose valid option."<<endl;
        }
    }





    return 0;
}