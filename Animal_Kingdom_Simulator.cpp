#include <iostream>
using namespace std;

class Animal
{
    public:

        string name;
        int age;

    public:

        void speak()const
        {

        } 

        Animal(string name,int age)
        {
            this->name=name;
            this->age=age;
        }       
};

class Bird:private Animal
{
    private:

        int winglength;

    public:

        void speak()const
        {
            cout<<"My name is: ";
            cout<<name<<endl;

            cout<<"My age is: ";
            cout<<age<<endl;

            cout<<"I am a  Bird"<<endl;
            cout<<"I can sing"<<endl;
            cout<<endl;


        } 

        Bird(string name,int age,int winglentgh):Animal(name,age)
        {
            this->winglength=winglength;
        }       

};

class Reptile: private Animal
{
    private:

        string habitat;

    public:

        void speak()const
        {
            cout<<"My name is: ";
            cout<<name<<endl;

            cout<<"My age is: ";
            cout<<age<<endl;

            cout<<"I am a  Reptile"<<endl;
            cout<<"I can creep"<<endl;
        }

        Reptile(string name,int age,string habitat): Animal(name,age)
        {
            this->habitat=habitat;
        }

            
};


int main()
{

    Bird b("Parrot",2,4);
    b.speak();

    Reptile r("Crocodile",5,"land");
    r.speak();


    return 0;
}