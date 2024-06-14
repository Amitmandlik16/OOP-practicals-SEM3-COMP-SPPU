#include <iostream>
using namespace std;

class complex
{
    public:
    float real,img;
        complex()
            {
                real=img=0;
            }
        complex operator+(complex);
        complex operator-(complex);
        complex operator*(complex);
        friend ostream &operator<<(ostream &out ,complex &c);
        friend istream &operator>>(istream &in ,complex &C);
};
complex complex::operator+(complex c)
{
    complex c1;
    c1.real=real+c.real;
    c1.img=img+c.img;
    return c1;
}
complex complex::operator-(complex c)
{
    complex c1;
    c1.real=real-c.real;
    c1.img=img-c.img;
    return c1;
}
complex complex::operator*(complex c)
{
    complex c1;
    c1.real=(real*c.real)-(img*c.img);
    c1.img=(real*c.img)+(img*c.real);
    return c1;
}
ostream &operator<<(ostream &out ,complex &c)
{
    out<<c.real;
    out<<"+"<<c.img<<"i";
    return out;
}
istream &operator>>(istream &in ,complex &c)
{
    cout<<"Enter the real part =";
    in>>c.real;
    cout<<"Enter the imaginary part";
    in>>c.img;
    return in;
}

int main()
{
    complex x,a,b,c;
    cout<<x;
    cout<<"\n Enter first complex number ";
    cin>>a;
    cout<<a;
    cout<<"\n Enter second complex number ";
    cin>>b;
    cout<<b;
    cout<<"\n Addition of two complex number is ";
    c=a+b;
    cout<<c;
    cout<<"\n subtraction of two complex number is ";
    c=a-b;
    cout<<c;
    cout<<"\n Multiplication of two complex number is";
    c=a*b;
    cout<<c;
    return 0;
}