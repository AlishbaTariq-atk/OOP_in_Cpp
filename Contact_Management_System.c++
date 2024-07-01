#include <iostream>

using namespace std;

class DOB
{
    int day;
    int month;
    int year;

    public:

   
    //setters
    void setday(int day)
    {
        this->day=day;
    }

    void setmonth(int month)
    {
        this->month=month;
    }

    void setyear(int year)
    {
        this->year=year;
    }

     //constructor
    DOB(int day=0,int month=0,int year=0)
    {
       setday(day);
       setmonth(month);
       setyear(year);
    }


    //getters
    int getday()const
    {
        return day;
    }

    int getmonth()const
    {
        return month;
    }

    int getyear()const
    {
        return year;
    }

    
};

class Contact
{
    string name;
    string phone_no;
    string email;
    DOB date;

    public:
    
    //setters
    void setname(string name)
    {
        this->name=name;
    }

    void setPhoneNO(string phone_no)
    {
        this->phone_no=phone_no;
    }

    void setemail(string email)
    {
        this->email=email;
    }


    //constructor
    Contact(string name,string phone_no,string email,int day,int month,int year)
    {
        setname(name);
        setPhoneNO(phone_no);
        setemail(email);
        date.setday(day);
        date.setmonth(month);
        date.setyear(year);
    }
    Contact()
    {

    }

    //getters
    string getname()const
    {
        return name;
    }

    string getPhoneNo()const
    {
        return phone_no;
    }

    string getemail()const
    {
        return email;
    }

    string getdate()const
    {
        return to_string(date.getday()) + "/" + to_string(date.getmonth()) + "/" + 
               to_string(date.getyear());
    }
    
    int getmonth()const
    {
        return date.getmonth();
    }

    void setday(int day)
    {
        date.setday(day);
    }

    void setmonth(int  month)
    {
        date.setmonth(month);
    }

    void setyear(int year)
    {
        date.setyear(year);
    }
    
};


class C_Book
{
   Contact book[3];

   public:

   //method
   void createbook()
   {
        string name;
        string phone_no;
        string email;
        int day,month,year;

        for(int i=0;i<3;i++)
        {
            cout<<"Person "<<i+1<<":\n"<<endl;
            cout<<"Enter Name: "<<endl;
            getline(cin>>ws,name);
            book[i].setname(name);

            cout<<"Enter Phone NO:"<<endl;
            getline(cin>>ws,phone_no);
            book[i].setPhoneNO(phone_no);

            cout<<"Enter email:"<<endl;
            getline(cin>>ws,email);
            book[i].setemail(email);

            cout<<"Enter Date OF Birth as day(space),month(space),year:  "<<endl;
            cin>>day>>month>>year;
            book[i].setday(day);
            book[i].setmonth(month);
            book[i].setyear(year);

            cout<<endl;

        }    
    }

    void printBook()const
    {
        cout<<"Contacts Info: "<<endl;

        for(int i=0;i<3;i++)
        {
            cout<<"Name: "<<book[i].getname()<<endl;
            cout<<"Phone No: "<<book[i].getPhoneNo()<<endl;
            cout<<"Email :"<<book[i].getemail()<<endl;
            cout<<"DOB :"<<book[i].getdate()<<endl;
            cout<<endl;
        }
        

    }

    void printSameBD(int same_bd)const
    {
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(book[i].getmonth()==same_bd)
            {
                cout<<book[i].getname()<<endl;
                count++;
            }
        }
        if(count==0)
        {
            cout<<"No Contact with same birthday month."<<endl;
        }

    }

   
   
};

int main()
{

    C_Book c;
    int same_bd;

    c.createbook();
    c.printBook();

    cout<<"Enter a month to get contacts with same brithday month:  "<<endl;
    cin>>same_bd;
    c.printSameBD(same_bd);

    return 0;
}