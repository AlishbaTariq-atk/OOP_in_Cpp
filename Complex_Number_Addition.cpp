#include <iostream>

using namespace std;

class Complex
{
        friend Complex addComplex(Complex &c1,Complex &c2);
    private:
        int real;
        int imag;
    public:
        Complex(int real=0,int imag=0)
        {
            this->real=real;
            this->imag=imag;
        }
        void display()const
        {
            cout<<"New complex number is:\n"
                <<real<<"+"<<imag<<"i"<<endl;
        }    
};

//friend function defined
Complex addComplex(Complex &c1,Complex &c2)
{
    Complex temp;
    temp.real=c1.real + c2.real;
    temp.imag=c1.imag + c2.imag;

    return temp;
}


int main()
{
    Complex c1(3,4);
    Complex c2(2,3);

    Complex c3=addComplex(c1,c2);
    c3.display();

    return 0;
}