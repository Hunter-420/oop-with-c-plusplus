#include<iostream>
using namespace std;

class complex
{
    private:
    int real, imaginary;

    public:
    //default constructor
    complex()
    {

    }

    //parametarixed constructor
    complex(int re,int imag)
    {
        real=re;
        imaginary=imag;
    }

    //overload unary operator "++"
    complex operator++()
    {
        complex h;
        h.real=++real;
        h.imaginary=++imaginary;
        return h;
    }

    //overload binary operator "+"
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }

    //display function
    void display()
    {
        cout<<real<<" + "<<imaginary<<"j"<<endl;
    }

};

int main()
{
    system("cls");
    complex c1,c2,c3;
    c1=complex(2,4);
    c1=++c1;
    c2=complex(1,3);
    c2=++c2;
    c3=c1+c2;

    //to dispaly our sum of the complex number
    c3.display();
    return 0;
}