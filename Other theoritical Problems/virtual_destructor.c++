//Virtual Destructor

#include<iostream>
using namespace std;

class base
{
    public:
    virtual void fun()
    {
        cout<<"Base Function called"<<endl;
    }
     base()
    {
        cout<<"I am Base class"<<endl;
    }

     virtual ~base()
    {
        cout<<"Base Destructor clalled"<<endl;
    }
};

class derived:public base
{
    public:

    virtual void fun()
    {
        cout<<"Derived Function called"<<endl;
    }

    derived()
    {
        cout<<"I am derived class "<<endl;
    }

    virtual ~derived()
    {
        cout<<"Derived destructor called"<<endl;
    }
};

int main()
{
    system("cls");
    base *b = new base();
    base *d = new derived();
    b->fun();
    d->fun();
    delete b;
    delete d;
    return 0;

}