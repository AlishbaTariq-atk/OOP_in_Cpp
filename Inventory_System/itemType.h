#include<string>
#include<iostream>
using namespace std;
class itemType
{
    int id;
    string name;
    float price;
    int quantity;

public:

//setters defined
    void setid(int id);
    void setname(string name);
    void setprice(float price);
    void setquantity(int quantity);

//getters declared
    int getid()const;
    string getname()const;
    float getprice()const;
    int getquantity()const;

//constructors declared
    itemType();
    itemType(int id,string name,float price,int quantity);  

//destructor declared
    ~itemType();

//method defined
    void item_details();

         
};

