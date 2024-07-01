#include <iostream>

using namespace std;

class Character //Abstract class
{
    protected:
        string name;
    public:
        //constructor
        Character(string name="")
        {
            this->name=name;
        }
        //destructor
        virtual ~Character()
        {
            cout<<"Character Destroyed!"<<endl;
        }
        //pure virtual function
        virtual void attack()const=0;
          
};

class Warrior:public Character
{
    private:
        int strength;

    public:
        //constructor
        Warrior(string name,int strength=0):Character(name)
        {
            this->strength=strength;
        }
        //destructor
        ~Warrior()
        {
            cout<<"Warrior Destroyed!"<<endl;
        }
        //overloaded function
        void attack()const
        {
            cout<<name<<" attacks with strength "<<strength<<endl;
        }

};

class Mage:public Character
{
    private:
        int intelligence;

    public:
        //constructor
        Mage(string name,int intelligence=0):Character(name)
        {
            this->intelligence=intelligence;
        }
        //destructor
        ~Mage()
        {
            cout<<"Mage Destroyed!"<<endl;
        }
        //overloaded function
        void attack()const
        {
            cout<<name<<" attacks with fireballs using intelliegnce "<<intelligence<<endl;
        }    

};

class  Thief:public Character
{
    protected:
        int agility;

     public:
        //constructor
        Thief(string name,int agility=0):Character(name)
        {
            this->agility=agility;
        }
        //destructor
        ~Thief()
        {
            cout<<"Thief Destroyed!"<<endl;
        }
        //overloaded function
        void attack()const
        {
            cout<<name<<" attacks with daggers using agility "<<agility<<endl;
        }
};


int main()
{
    string name1,name2,name3;
    int strength,intelligence,agility;

//data for warrior
    cout<<"Enter Warrior name: ";
    getline(cin>>ws,name1);
    cout<<"Enter Warrior Strength: ";
    cin>>strength;
    cout<<endl;

//data for Mage
    cout<<"Enter the Mage name: ";
    getline(cin>>ws,name2);
    cout<<"Enter the Mage Intelligence: ";
    cin>>intelligence;
    cout<<endl;

//data for Thief
    cout<<"Enter the Thief name: ";
    getline(cin>>ws,name3);
    cout<<"Enter the thief agility: ";
    cin>>agility;
    cout<<endl;

//creating pointer objects
    Character *w=new Warrior(name1,strength);
    w->attack();

    Character *m=new Mage(name2,intelligence);
    m->attack();

    Character *t=new Thief(name3,agility);
    t->attack();

//relasing memory and solving dangling pointers issue  
    delete w;
    w=NULL;
    delete m;
    m=NULL;
    delete t;
    t=NULL;


    return 0;
}