#include "itemType.h"
#include <iostream>
#include <string.h>
using namespace std;

//setters defined
    void itemType::setid(int id)
    {
        this->id=id;
    }
    void itemType::setname(string name)
    {
        this->name=name;
    }
    void itemType::setprice(float price)
    {
        this->price=price;
    }
    void itemType::setquantity(int quantity)
    {
        this->quantity=quantity;
    }

//getters defined
    int itemType::getid()const
        {
            return id;
        }
    string itemType::getname()const
        {
            return name;
        }
    float itemType::getprice()const
        {
            return price;
        }
    int itemType::getquantity()const
        {
            return quantity;
        }

//default constructor
    itemType::itemType()
    {
        id=0;
        name="";
        price=0.0;
        quantity=0;
    }

//parameterized constructor
   itemType::itemType(int id,string name,float price,int quantity)
   {
        this->id=id;
        this->name=name;
        this->price=price;
        this->quantity=quantity;
   }

//destructor   
    itemType::~itemType()
    {
        cout<<"Object Destroyed!"<<endl;
    }
//method declared
    void itemType::item_details()
    {
        cout<<"ITEM DETAILS: "<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Pric: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }

    