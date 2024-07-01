#include <iostream> 

using namespace std;

class Zodiac
{
    private:
        string name;
        string description;
    public:

        //construtor
        Zodiac(string name="",string description="")
        {
            //setname(name);
            this->name=name;
           // setdescript(description);
           this->description=description;
        }

        //setters
        // void setname(string name)
        // {
        //     this->name=name;
        // } 
        // void setdescript(string description)
        // {
        //     this->description=description;
        // } 

        //getters  
        // string getname()const
        // {
        //     return name;
        // }
        // string getdescript()const
        // {
        //     return description;
        // }

        //methods
        void generateZodiacData(int day,int month)
        {
            switch (month)
            {
            case 1://january
                if(day>=1 && day<=19)
                {
                   name="Capricorn";
                   description="Capricorns are known for their disciplined and responsible personalities. They are reliable, practical, and ambitious, but can also be pessimistic and rigid.";
                }
                else if(day>=20 && day<=31)
                {
                    name="Aquarius";
                    description="Aquarians are known for their independent and progressive personalities. They are idealistic, intellectual, and unconventional, but can also be detached and unpredictable.";
                    
                }
                break;      

            case 2://feb
                if(day>=1 && day<=18)
                {
                   name="Aquarius";
                   description="Aquarians are known for their independent and progressive personalities. They are idealistic, intellectual, and unconventional, but can also be detached and unpredictable.";
                }
                else if(day>=19 && day<=28)
                {
                    name="Pisces";
                    description="Pisces are known for their compassionate and imaginative personalities. They are artistic, empathetic, and intuitive, but can also be overly trusting and escapist.";
                    
                }
                break;      
    
            case 3://march
                if(day>=21 && day<=31)
                {
                    name="Aries";
                    description="Aries are known for their confident and ambitious personalities. They are natural born leaders who are energetic, passionate, and can be impulsive at times.";
                }
                if(day>=1 && day<=20)
                {
                    name="Pisces";
                    description="Pisces are known for their compassionate and imaginative personalities. They are artistic, empathetic, and intuitive, but can also be overly trusting and escapist.";
                }
                break;
            case 4://april
                if(day>=1 && day<=19)
                {
                    name="Aries";
                    description="Aries are known for their confident and ambitious personalities. They are natural born leaders who are energetic, passionate, and can be impulsive at times.";
                }
                else if(day>=20 && day<=30)
                {
                    name="Taurus";
                    description="Taurus are known for their strong will and their determination. They are reliable, practical, and patient, but can also be stubborn and possessive.";
                }
                break;
            case 5://may
                if(day>=1 && day<=20)
                {
                   name="Taurus";
                   description="Taurus are known for their strong will and their determination. They are reliable, practical, and patient, but can also be stubborn and possessive.";
                }
                else if(day>=21 && day<=31)
                {
                    name="Gemini";
                    description="Gemini are known for their curiosity and versatility. They are sociable, adaptable, and can be quite witty, but can also be restless and indecisive.";
                }
                break;    
            case 6://june
                if(day>=1 && day<=20)
                {
                   name="Gemini";
                   description="Gemini are known for their curiosity and versatility. They are sociable, adaptable, and can be quite witty, but can also be restless and indecisive.";
                }
                else if(day>=21 && day<=30)
                {
                    name="Cancer";
                    description="Cancers are known for their emotional and nurturing personalities. They are loyal, sensitive, and intuitive, but can also be moody and clingy at times.";

                }
                break;  
            case 7://july
                if(day>=1 && day<=22)
                {
                   name="Cancer";
                   description="Cancers are known for their emotional and nurturing personalities. They are loyal, sensitive, and intuitive, but can also be moody and clingy at times.";
                }
                else if(day>=23 && day<=31)
                {
                    name="Leo";
                    description="Leos are known for their confidence and generosity. They are natural born leaders, creative, and passionate, but can also be egotistical and stubborn.";
                    
                }
                break;                   
            case 8://august
                if(day>=1 && day<=22)
                {
                   name="Leo";
                   description="Leos are known for their confidence and generosity. They are natural born leaders, creative, and passionate, but can also be egotistical and stubborn.";
                }
                else if(day>=23 && day<=31)
                {
                    name="Virgo";
                    description="Virgos are known for their analytical and detail-oriented personalities. They are hardworking, practical, and organized, but can also be critical and nitpicky.";
                    
                }
                break;      
            case 9://sept
                if(day>=1 && day<=22)
                {
                    name="Virgo";
                   description="Virgos are known for their analytical and detail-oriented personalities. They are hardworking, practical, and organized, but can also be critical and nitpicky.";
                }
                else if(day>=23 && day<=30)
                {
                    name="Libra";
                    description="Libras are known for their diplomatic and charming personalities. They are social, cooperative, and fair-minded, but can also be indecisive and easily influenced by others.";
                    
                }
                break;      
            case 10://oct
                if(day>=1 && day<=22)
                {
                   name="Libra";
                   description="Libras are known for their diplomatic and charming personalities. They are social, cooperative, and fair-minded, but can also be indecisive and easily influenced by others.";
                }
                else if(day>=23 && day<=31)
                {
                    name="Scorpio";
                    description="Scorpios are known for their intense and passionate personalities. They are determined, intuitive, and can be quite secretive, but can also be jealous and possessive.";
                    
                }
                break;      
            case 11://nov
                if(day>=1 && day<=21)
                {
                   name="Scorpio";
                   description="Scorpios are known for their intense and passionate personalities. They are determined, intuitive, and can be quite secretive, but can also be jealous and possessive.";
                }
                else if(day>=22 && day<=30)
                {
                    name="Sagittarius";
                    description="Sagittarians are known for their adventurous and optimistic personalities. They are idealistic, philosophical, and love to explore, but can also be careless and restless.";
                    
                }
                break;          
            case 12://dec
                if(day>=1 && day<=21)
                {
                   name="Sagittarius";
                   description="Sagittarians are known for their adventurous and optimistic personalities. They are idealistic, philosophical, and love to explore, but can also be careless and restless.";
                }
                else if(day>=22 && day<=31)
                {
                    name="Capricom";
                    description="Capricorns are known for their disciplined and responsible personalities. They are reliable, practical, and ambitious, but can also be pessimistic and rigid.";
                    
                }
                break;            
           
            }
            if(month>=13 || day>31)
            {
                cout<<"Invalid Values!"<<endl;
            }
        }

        void displayPersonality()const
        {
            cout<<"\nYour Zodiac Sign is "<<name<<endl;
            cout<<"Personality: "<<endl<<description<<endl;
        }

    

};

class DOB
{
    private:
        int day;
        int month;
        int year;
        Zodiac z;

    public:
    //constructor
        DOB(int day=0,int month=0,int year=0)
        {
            setday(day);
            setmonth(month);
            setyear(year);
           // z.setname(name);
           // z.setdescript(description);
        }

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

    //method
        void personality()
        {
            int d=getday();
            int m=getmonth();
            z.generateZodiacData(d,m);
            z.displayPersonality();
        }

};

class Person
{
    private:
        string name;
        DOB dob;

    public:
        //constructor
        Person(string name="",int day=0,int month=0,int year=0)
        {
            setname(name);
            dob.setday(day);
            dob.setmonth(month);
            dob.setyear(year);
            displayZodiacInfo();

        }    
        //setter
        void setname(string name)
        {
            this->name=name;
        }
        //getters
        string getname()const
        {
            return name;
        }
        //methods
        void displayZodiacInfo()
        {
           
            cout<<endl<<name<<",your details for zodiac are as follows: "<<endl;
            dob.personality();


        }

};


int main()
{
    //taking values from user
        int dd,mm,yy;
        string n;

        cout<<"Enter your name: ";
        getline(cin>>ws,n);

        cout<<"Enter your date of birth: \nday: ";
        cin>>dd;

        cout<<"Month: ";
        cin>>mm;
        
        cout<<"Year: ";
        cin>>yy;
        

//passing user desired values to the object
    Person p(n,dd,mm,yy);

    return 0;
}