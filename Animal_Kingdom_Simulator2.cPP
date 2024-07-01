#include <iostream>
#include <cstring>

using namespace std;


class Animal
{
    protected:
        string name;
        string colour;
    public:
        Animal(string name="",string colour="")
        {
            this->name=name;
            this->colour=colour;

        }
        virtual~Animal()
        {
            cout<<"Animal extinct!"<<endl;
        }
        virtual void display()=0;  

};


class Deer:public Animal
{
    private:
        bool hasAntlers;
    public:
        Deer(string name, string colour, bool hasAntlers)
        {
            this->name=name;
            this->colour=colour;

           this->hasAntlers=hasAntlers;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Colour: "<<colour<<endl;
            if(hasAntlers=true)
            {
                cout<<"Deer has Antlers."<<endl;
            }
            else
            {
                cout<<"Deer does not have Antlers."<<endl;
            }
        }    
};

class Zebra:public Animal
{
    private:
        string strip_pattern;
    public:
        Zebra(string name , string colour , string strip_pattern ="")
        {            
            this->name=name;
            this->colour=colour;
            this->strip_pattern=strip_pattern;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Colour: "<<colour<<endl;
            cout<<"strip Pattern: "<<strip_pattern<<endl;
        }

};


int main()
{
    Animal *A1=new Deer("Fati","Biege",true);
    A1->display();
    Animal *A2=new Zebra("Medagascar","Black And White","Horizontal");
    A2->display();

    delete A1;
    delete A2;

    
return 0;
}