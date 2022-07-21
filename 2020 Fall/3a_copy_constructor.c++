//Copy Constructor
/*
-> A copy constructor is a member function that intiallize the object using another object of that
class. 

-> We define copy constructor using general function prototype

className(className &obj)       //&obj is the address of another object address

-> Calling copy constructor

constructor h;          //first constructor
constructor(&h)         //copy constructor

-> The process of initialization of object member using copy constructor is called
    copy initialization because we copy the value of the another object datamemer within 
    the same class

*/

#include<iostream>
using namespace std;

class copycat
{
    private:
    int a,b;

    public:

    copycat(int x, int y)
    {
        a=x;
        b=y;
        cout<<"Hello I am parametarized constructor, My values are : "<<a<<" & "<<b<<endl;
    }

    copycat(copycat &obj)
    {
        a=obj.a;
        b=obj.b;
        cout<<"Hello I am copid master! After copied "<<a<<" & "<<b<<endl;
    }
};

int main()
{
    system("cls");
    copycat h(10,3);        //parametarized constructor
    copycat h1(h);          //copy constructor
    return 0;
}

// A refrence variable has been used an argument to the copy constructor. We can't pass the 
// argument by value to the copy constructor
