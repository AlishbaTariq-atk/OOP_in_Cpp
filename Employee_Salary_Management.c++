#include <iostream>
#include <string>
using namespace std;


class companyType{
   
    int id;
    string name;
    string job_title;
    int hours;
public:

//setters declared
    void setid(int id);
    void setname(string name);
    void settitle(string job_title);
    void sethour(int hour);

//method declared   
    int calc_Salary(int hr);

//getters defined    
    string getname()const;
    int gethours()const;
    
};

//setters defined
    void companyType::setid(int id)
        {
            this->id=id;
        }

    void companyType::setname(string name)
        { 
            this->name=name;
        }

    void companyType::settitle(string job_title)
        {
            this->job_title=job_title;
        }

    void companyType::sethour(int hour)
        {
            this->hours=hour;
        }

//method defined
    int companyType::calc_Salary(int hr)
        {
            int salary=0;
            const int hourly_rate=100;
            const int overtime=200;
            if(hr<=40)
            {
                salary += (hr*hourly_rate);
            }
            else
            {
                salary +=(hr*hourly_rate); 
                hr=40-hr;
                salary +=(hr*overtime);
            }
            return salary;

        }

//getters defined
    string companyType::getname()const
    {
        return name;

    }
    int companyType::gethours()const
    {
        return hours;

    }
    

//function defined
    void display(companyType emp[],int e)
    {

    for(int i=0;i<e;i++)
    {

        cout<<"EMPLOYEE ("<<i+1<<") :"<<endl;
        cout<<"Employee Name: "<<emp[i].getname()<<endl;
        cout<<"Employee salaray: RS- "<<emp[i].calc_Salary(emp[i].gethours())<<endl;;
        cout<<endl;

    }
    }




int main(){
//setting variables for data entry
    int employees;
    int unqiue_id;
    string name; 
    string job_title; 
    int hours; 

//taking the number of employees for making an array
    cout<<"Enter the number of employees: "<<endl;
    cin>>employees;
    companyType emp[employees]; //employee array

//taking data from user for the employee database
    for(int i=0;i<employees;i++)
    {
        cout<<"Enter employee id for employee "<<i+1<<" : "<<endl;
        cin>>unqiue_id;
        emp[i].setid(unqiue_id);

        cout<<"Enter epmloyee name: "<<endl;
        getchar();
        getline(cin,name);
        emp[i].setname(name);

        cout<<"Enter job title: "<<endl;
        getline(cin,job_title);
        emp[i].settitle(job_title);

        cout<<"Enter the hours worked: "<<endl;
        cin>>hours;
        emp[i].sethour(hours);

        cout<<endl;

    }
//data display
    display(emp,employees);



    return 0;
}
