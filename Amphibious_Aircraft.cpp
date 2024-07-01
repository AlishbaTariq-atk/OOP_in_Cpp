#include <iostream>
using namespace std;



class Boat
{
    protected:

        int boat_lentgh;

    public:

        void swim()const
        {
            cout<<"I am swimming"<<endl;
        }   

        Boat(int boat_lentgh)
        {
            this->boat_lentgh=boat_lentgh;
        } 
};

class Plane
{
    protected:

        int maxAltitude;

    public:

        void fly()const
        {
            cout<<"I am flying"<<endl;
        }

        Plane(int maxAlitiude)
        {
            this->maxAltitude=maxAltitude;
        }

};        

class Skimmer: protected Boat, protected Plane
{
    private:

        int numPassengers;

    protected:

        string name;    

    public:

        void swim_and_fly()const
        {
            Boat::swim();
            Plane::fly();
        }

        Skimmer(string name,int numPassengers,int boat_lentgh,int maxAltitude):Boat(boat_lentgh),Plane(maxAltitude)
        {
            this->name=name;
        }

        void display()const
        {
            cout<<"Skimmer name: "<<name<<endl;
            cout<<"Passengers: "<<numPassengers<<endl;
            cout<<"Length: "<<boat_lentgh<<"ft"<<endl;
            cout<<"MAximun Alitude: "<<maxAltitude<<"ft"<<endl;
        }

            

};                

int main()
{
    Skimmer s("Swim and Fly",2,40,13000);
    s.display();
    s.swim_and_fly();

    return 0;
}