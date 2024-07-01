#include <iostream>
#include <iomanip>

using namespace std;

class UAV
{
public:
    virtual void takeoff() const
    {
        cout << "Taking off." << endl;
    }
    virtual void land() const
    {
        cout << "Landing." << endl;
    }
    virtual void display()const 
    {
    }
};

class SurvellienceUAV : virtual public UAV // solving diamond problem by virtual keyword
{
protected:
    string name;
    float weight;
    float maxAltitude;
    float zoomLevel;
    float recordingCapacity;
    bool isNightVision;

public:
    // default plus parameterized constructor
    SurvellienceUAV(string name = "", float weight = 0.0, float maxAltitude = 0.0, float zoomLevel = 0.0, float recordingCapacity = 0.0, bool isNightVision =true)
    {
        this->name = name;
        this->weight = weight;
        this->maxAltitude = maxAltitude;
        this->zoomLevel = zoomLevel;
        this->recordingCapacity = recordingCapacity;
        this->isNightVision = isNightVision;
    }

    void captureImage() const
    {
        cout << "Capturing Image." << endl;
    }

    void recordVideo() const
    {
        cout << "Recording Video." << endl;
        
    }
    void display()const
        {
        cout << "I am a Suvellience UAV" << endl;
        cout << "Name: " << name << endl;
        cout <<fixed<< setprecision(3) << "Weight: " << weight << "kg" << endl;
        cout <<fixed<< setprecision(3) <<"Altitude: " << maxAltitude << "ft" << endl;
        cout <<fixed<< setprecision(3) <<"Zoom Level: " << zoomLevel << "x" << endl;
        cout <<fixed<< setprecision(3) <<"Recording Capacity: " << recordingCapacity << "GB" << endl;
        if (SurvellienceUAV::isNightVision == 1)
        {
            cout << "I have a Night Vision." << endl;
        }
        else if(isNightVision==0)
        {
            cout << "I dont have a Night Vision." << endl;
        }
        else
        {
            cout<<"invalid input for Night Vision!"<<endl;
        }
        
    }
};

class CargoDeliveryUAV : virtual public UAV // solving diamond problem by virtual keyword
{
protected:
    string name;
    float weight;
    float maxAlitutde;
    float cargoArea;

public:
    CargoDeliveryUAV(string name = "", float weight = 0.0, float maxAltitude = 0.0, float cargoArea = 0.0)
    {
        this->name = name;
        this->weight = weight;
        this->maxAlitutde = maxAlitutde;
        this->cargoArea = cargoArea;
    }
    void deliverCargo() const
    {
        cout << "Cargo is delivered." << endl;
        cout<<endl;
    }
    void display()const 
    {
        cout<< endl << "I am a Cargo Delivery UAV" << endl;
        cout << "Name: " << name << endl;
        cout <<fixed<<setprecision(3) << "Weight: " << weight << "kg" << endl;
        cout <<fixed<<setprecision(3) << "Altitude: " << maxAlitutde << "ft" << endl;
        cout <<fixed<<setprecision(3) << "Cargo Area: " << cargoArea <<"km^3"<< endl;
        
    }
};

class MultiPurposeUAV : virtual public SurvellienceUAV, virtual public CargoDeliveryUAV // solving diamond problem
{
protected:
    string name;
    float weight;
    float maxAltitude;
    float solarPanelEfficiency;

public:
    
    MultiPurposeUAV(string name = "", float weight = 0.0, float maxAltitude = 0.0, float solarPanelEfficiency = 0.0, float zoomLevel = 0.0, float recordingCapacity = 0.0, bool isNightVision = true, float cargoArea = 0.0) : SurvellienceUAV(name, weight, maxAltitude, zoomLevel, recordingCapacity, isNightVision), CargoDeliveryUAV(name, weight, maxAltitude, cargoArea)
    {
        this->name = name;
        this->weight = weight;
        this->maxAltitude = maxAltitude;
        this->solarPanelEfficiency = solarPanelEfficiency;
    }

    void deliverCargoWithSurvellience() const
    {
        cout << "I am going to deliver a cargo along with survellience." << endl;
        takeoff();
        recordVideo();
        land();
        deliverCargo();
    }
    void display()const
    {
        cout << "I am a Multi Purpose UAV" << endl;
        cout << "Name: " << name << endl;
        cout <<fixed<<setprecision(3) << "Weight: " << weight << "kg" << endl;
        cout <<fixed<<setprecision(3) << "Altitude: " << maxAlitutde << "ft" << endl;
        cout <<fixed<<setprecision(3) << "Zoom Level: " << SurvellienceUAV::zoomLevel << "x" << endl;
        cout <<fixed<<setprecision(3) << "Recoding Capacity: " << SurvellienceUAV::recordingCapacity << "GB" << endl;
        if (SurvellienceUAV::isNightVision == 1)
        {
            cout << "I have a Night Vision." << endl;
        }
        else if(isNightVision==0)
        {
            cout << "I dont have a Night Vision." << endl;
        }
        else
        {
            cout<<"invalid input for Night Vision!"<<endl;
        }
        cout << "Cargo Area: " << CargoDeliveryUAV::cargoArea << endl;
        cout << "Solar Pannel Efficiency: " << solarPanelEfficiency << endl;
        
    }
};

int main()
{


    // data for Survellience UAV
    string name1;
    float weight1, altitude1, zoomlvl1, recordingcap1;
    bool vision1;

    cout << "Survellience UAV Data:" << endl;
    cout << "Enter name: ";
    getline(cin >> ws, name1);
    cout << "Enter Weight(kg): ";
    cin >> weight1;
    cout << "Enter Altitude(ft): ";
    cin >> altitude1;
    cout << "Enter Zoom Level(x): ";
    cin >> zoomlvl1;
    cout << "Enter Recording Capacity(GB): ";
    cin >> recordingcap1;
    cout << "Your Survellience UAV has Night Vision?\nEnter\n0(for false)\n1(for true): ";
    cin >> vision1;
    cout << endl;
    

    // data for CargoDelivery UAV
    string name2;
    float weight2, altitude2, cargoarea2;

    cout << "Cargo Delivery UAV Data:" << endl;
    cout << "Enter name: ";
    getline(cin >> ws, name2);
    cout << "Enter Weight: ";
    cin >> weight2;
    cout << "Enter Altitude: ";
    cin >> altitude2;
    cout << "Enter Cargo Area: ";
    cin >> cargoarea2;
    cout << endl;

    

    // data for Multi Purpose UAV
    string name3;
    float weight3, altitude3, zoomlvl3, recordingcap3, cargoarea3, solar3;
    bool vision3;

    cout << "Multi Purpose UAV Data:" << endl;
    cout << "Enter name: ";
    getline(cin >> ws, name3);
    cout << "Enter Weight(kg): ";
    cin >> weight3;
    cout << "Enter Altitude(ft): ";
    cin >> altitude3;
    cout << "Enter Zoom Level(x): ";
    cin >> zoomlvl3;
    cout << "Enter Recording Capacity(GB): ";
    cin >> recordingcap3;
    cout << "Enter Cargo Area(km^3): ";
    cin >> cargoarea3;
    cout << "Enter Solar Panel Efficiency: ";
    cin >> solar3;
    cout << "Your Multi Purpose UAV has Night Vision?\nEnter\n0(for false)\n1(for true): ";
    cin >> vision3;
    cout << endl;

    cout<<"----------------------------------------------------\n"<<endl;

    // objects creation and method calling
    SurvellienceUAV s(name1, weight1, altitude1, zoomlvl1, recordingcap1, vision1);
    s.display();
    s.recordVideo();

    CargoDeliveryUAV c(name2, weight2, altitude2, cargoarea2);
    c.display();
    c.deliverCargo();

    MultiPurposeUAV m(name3, weight3, altitude3, solar3, zoomlvl3, recordingcap3, vision3, cargoarea3);
    m.display();
    cout<<endl;
    m.deliverCargoWithSurvellience();

    return 0;
}