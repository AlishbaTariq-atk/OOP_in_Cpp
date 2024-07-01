#include <iostream>
using namespace std;


    class Employee
    {
       string name;

      public:
      //constructor
      Employee(string name="")
      {
        setname(name);
      }  
      
      //setter
      void setname(string name)
      {
        this->name=name;
      }

      //getter
      string getname()const
      {
        return name;
      }

      //method
      int calcSalaray()
      {
        return 0;
      }
    };


    class SalariedEmployee: public Employee
    {
        int annual_salary;

        public:

        //constructor
        SalariedEmployee()
        {
            setsalary(annual_salary);
        }

        //setter
        void setsalary(int annual_salary)
        {
            this->annual_salary=annual_salary;
        }

        //getter
        int getsalary()const
        {
            return annual_salary;
        }

        //method
        int calcSalary()
        {
            int salary=annual_salary/12;

            return salary;
        }

        

    };

    class HourlyEmployee: public Employee
    {
        int hourly_rate;

        public:

        //constructor
        HourlyEmployee()
        {
            sethourly_rate(hourly_rate);
        }

        //setter
        void sethourly_rate(int hourly_rate)
        {
            this->hourly_rate=hourly_rate;
        }

        //getter
        int gethourly_rate()const
        {
            return hourly_rate;
        }

        //method
        int calcSalary(int hours_worked)
        {  
            int salary= hours_worked * hourly_rate; 

            return salary;
        }

        
    };

int main()
{
    
    Employee e;
    SalariedEmployee e1;
    HourlyEmployee e2;
    string name;
    int type;
    int annaul_salary;
    int hourly_rate;
    int hours_worked;

    while(type!=3)
    {

        cout<<"\n\nEnter Employee name:"<<endl;
        getline(cin>>ws,name);
        e.setname(name);

        cout<<"\nEnter the employee type to calculate the salary:\n 1.Salaried Employee\n 2.Hourly Employee\n 3.Exit: "<<endl;
        cin>>type;

        if(type==1)
        {
            
            cout<<"Enter Annual salary: $";
            cin>>annaul_salary;
            e1.setsalary(annaul_salary);

            cout<<"\nSalaried Employee Details: "<<endl;
            cout<<"Name: "<<e.getname()<<endl;
            cout<<"Annaul Salary: $"<<e1.getsalary()<<endl;
            cout<<"Monthly Salary: $"<<e1.calcSalary()<<endl;


        }
        else if(type==2)
        {
            cout<<"Enter the hourly rate for an employee: $";
            cin>>hourly_rate;
            e2.sethourly_rate(hourly_rate);
            cout<<"Enter the hours worked: ";
            cin>>hours_worked;

            cout<<"\nHourly Employee Details: "<<endl;
            cout<<"Name: "<<e.getname()<<endl;
            cout<<"Hourly Rate: $"<<e2.gethourly_rate()<<endl;
            cout<<"Hours Worked: "<<hours_worked<<endl;
            cout<<"Employee Salary: $"<<e2.calcSalary(hours_worked)<<endl;
        }
        }
        cout<<endl;


    return 0;
}