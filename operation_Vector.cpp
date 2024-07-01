#include <iostream>

using namespace std;

//template class
template<class V>
class Vector
{
        V v;

   public:
        Vector(V v)
        {
            this->v=v;
        }
        int calculateDotproduct(V v2)
        {
            int result=v.calculateDotproduct(this->v);

            return result;
        } 
        // friend ostream& operator<<(ostream& c,const Vector& v);
};
//friend function for vector class
// ostream& operator<<(ostream& c,const Vector& v)
// {
//     c<<"("<<v.x<<","<<v.y<<")"<<endl;

//     return c;    
// }



class My2DVector
{
        int x;
        int y;

    public:
        My2DVector()
        {
            x=0;
            y=0;
        }
        My2DVector(int x,int y)
        {
            this->x=x;
            this->y=y;
        }

        friend ostream& operator<<(ostream& c,const My2DVector& v);
        friend istream& operator>>(istream& i, My2DVector& v);

        int calculateDotproduct(My2DVector v2)
        {
            My2DVector v3;

            v3.x=x * v2.x;
            v3.y=y * v2.y;

            return v3.x + v3.y;
        }

};
//friend functions for 2D vector
ostream& operator<<(ostream& c,const My2DVector& v)
{
    c<<"("<<v.x<<","<<v.y<<")"<<endl;

    return c;    
}

istream& operator>>(istream& i, My2DVector& v)
{
    cout<<"Enter value for x and y axis: ";
    i>>v.x>>v.y;

    return i;    
}

class My3DVector
{
    int x;
    int y;
    int z;

    public:
        My3DVector()
        {
            x=0;
            y=0;
            z=0;
        }
        My3DVector(int x,int y,int z)
        {
            this->x=x;
            this->y=y;
            this->z=z;
        }

        friend ostream& operator<<(ostream& c,const My3DVector& v);
        friend istream& operator>>( istream& i, My3DVector& v);

        int  calculateDotproduct(My3DVector v2)
        {
            My3DVector v3;
            v3.x=x * v2.x;
            v3.y=y * v2.y;
            v3.z=z * v2.z;

            return v3.x + v3.y + v3.z;
        }
};
//friend fucntions for 3D vector
ostream& operator<<(ostream& c,const My3DVector& v)
{
    c<<"("<<v.x<<","<<v.y<<","<<v.z<<")"<<endl;
        
    return c;    
}
istream& operator>>(istream& i, My3DVector& v)
{
    cout<<"Enter value for x , y and z axis: ";
    i>>v.x;
    i>>v.y;
    i>>v.z;

    return i;    
}


int main()
{

    My2DVector vect1;
   // My2DVector vect2;
    My3DVector vect2;
   // My3DVector vect4;

//using friend functions for cin
    cout<<"Enter values for vect1,vect2(as 2D vectors): "<<endl;
    cin>>vect1;
   // cin>>vect2;
    cout<<"Enter values for vect3 and vect4(as 3D vectors):"<<endl;
    cin>>vect2;
    //cin>>vect4;

     Vector<My2DVector> v1(vect1);
    // Vector<My2DVector> v2(4,5);
     Vector<My3DVector> v2(vect2);
    // Vector<My3DVector> v4(4,5,6);

    int result1=v1.calculateDotproduct(vect1);
    int result2=v2.calculateDotproduct(vect2);

    cout<<"\nVector=" << v1
        <<"Vector="<<vect1
        <<"Dot Product="<<result1;

    cout<<"\n------------------------------------"<<endl;

    cout<<"Vector=" << v2
        <<"Vector="<<vect2
        <<"Dot Product="<<result2;    



    return 0;
}