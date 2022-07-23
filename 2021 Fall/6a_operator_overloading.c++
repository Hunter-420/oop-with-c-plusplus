//Why operator are overloaded
/*
-> Operator overloading provides a flexible option for the creations of new definations for the 
    c++ operators

-> We can define an additional task for operators with the help of operator overloading

-> We also able to almost create a new language of our own by the creative use of function 
  & operator overloading

-> General form of operaor overloading

    return_type classname :: operator op(argument)
    {
        Function body       //task define
    }
*/

//PROBLEM:
/*
    We have a class name complex which have a data member real & imaginary. 
    Default & Parametarized constructor are there to initialize the data member. WAP overloading
    unary operator "++" where real & imaginary data member will be incremented and "+" operator
    to add two complex number
*/

#include<iostream>
using namespace std;

class complex
{
    private:
    int real,imaginary;

    public:
    //default constructor
    complex()
    {

    }

    //parametarized constructor
    complex(int re, int imag)
    {
        real=re;
        imaginary=imag;
    }

    //unary operator "++"
    complex operator++()
    {
        complex h;
        h.real=++real;
        h.imaginary=++imaginary;
        return h;
    }

    //operator "+"
    complex operator+(complex obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.imaginary=imaginary+obj.imaginary;
        return temp;
    }

    void dispaly()
    {
        cout<<real<<" + "<<imaginary<<"j"<<endl;
    }
};


int main()
{
    system("cls");
    complex c1,c2,c3;
    c1=complex(2,3);
    c1=++c1;
    c2=complex(2,2);
    c2=++c2;
    c3=c1+c2;
    
    //displaying
    c3.dispaly();
   // c2.display();
    //c3.display();
    return 0;
}