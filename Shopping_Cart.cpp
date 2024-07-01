#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Items
{
    string name;
    float price;

   public:
    Items()
    {
        name="";
        price=0.0;
    }
    Items(string name,float price)
    {
        setname(name);
        setprice(price);
    }
    void setname(string name)
    {
        this->name=name;
    }
    void setprice(float price)
    {
        this->price=price;
    }
    string getname()const
    {
        return name;
    }
    float getprice()const
    {
        return price;
    }

};

class Cart
{
    vector<Items> cart;

    public:
        void addCart(Items item)
        {
            cart.push_back(item);
            cout<<"Item added succesfully!"<<endl;
        }
        void removeCart(int index)
        {
            bool check=cart.empty();
            if ( check == true )
            {
                cout<<"Cart is empty."<<endl;
            }
            else
            {
            cart.erase(cart.begin() + (index-1));

            cout<<"Item removed successfully!"<<endl;
            }
        }
        void clearCart()
        {
            
            cart.clear();
            cout<<"Cart cleared succesffuly!"<<endl;
            
        }
        void exchangeItem(Items item,int index)
        {
            bool check=cart.empty();
            if ( check == true )
            {
                cout<<"Cart is empty.No item to exchange."<<endl;
            }
            else
            {
                cart.at( index-1 ) = item;
                cout<<"Item exchanged successfully!"<<endl;
            }
        }
        void printCart()const
        {
            bool check=cart.empty();
            if ( check == true )
            {
                cout<<"Cart is empty."<<endl;
            }
            else
            {
                cout << left << setw(5) << "Index" 
                     << right << setw(15) << "Name" 
                     << setw(22) << right << "Price(-RS)"<<endl;
                cout << "---------------------------------------"<<endl;     
                //vector<Items>:: iterator i;
                for(int i=0;i!=cart.size();i++)
                {
                    
                    cout << right << setw(5) << i + 1 << "." 
                         << right << setw(15) << cart[i].getname()
                         << setw(15) <<"RS-"<< left << fixed << setprecision(2) << cart[i].getprice()<<endl;
                }
            }
        }
};

int main()
{
   Cart cart; 
   //hardcoding some items
   Items i1={"Pizza",500.0};
   cart.addCart(i1);
   Items i2={"Ice-cream",100.00};
   cart.addCart(i2);

   int option;

    while ( option!=6)
    {

        cout << "\nWelcome.Kindly choose from the menu: "<<endl;
        cout << "Menu:"<<endl
             << "1) Add item"<<endl
             << "2) Remove item"<<endl
             << "3) Clear cart"<<endl
             << "4) Exchange item"<<endl
             << "5) View cart"<<endl
             << "6) Exit"<<endl;
        cin  >> option;  

        switch(option)
        {
            case 1:
            {
                Items item;
                string name;
                float price;

                cout << "Enter item's name: ";
                getline(cin>>ws,name);
                item.setname(name);

                cout << "Enter item's price: ";
                cin>>price;
                item.setprice(price);

                cart.addCart(item);
                break;

            }
            case 2:
            {
                int index;
                cout << "Enter the index to remove: ";
                cin  >> index;
                cart.removeCart(index);
                break;
            }
            case 3:
            {
                cart.clearCart();
                break;
            }    
            case 4:
            {
                int index;
                cout << "Enter the index at which you want the item to be exchanged: ";
                cin  >> index;

                //updating the index with new item's info
                Items item;
                string name;
                float price;

                cout<< "Enter the data for the new item: "<<endl;
                cout << "Enter item's name: ";
                getline(cin>>ws,name);
                item.setname(name);

                cout << "Enter item's price: ";
                cin>>price;
                item.setprice(price);

                cart.exchangeItem( item, index);
                break;

            }
            case 5:
            {
                cart.printCart();
                break;
            }
            
        } 

    }     
        

    return 0;
}