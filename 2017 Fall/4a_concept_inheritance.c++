/*
    Write a base class that ask the user to enter time(hour minute & second) and derived class adds the time of it's own
    with the base. Finally make the third class that is friend of the derived and calculate the difference of base class
    time and it's own time
*/

#include<iostream>
using namespace std;

class base
{
    protected:
    int hours,min,sec;
    public:
    void get_input()
    {
        cout<<"Please Enter\nHours    Minutes   Second  "<<endl;
        cin>>hours>>min>>sec;
    }
};

class derived:virtual public base
{
    protected:
    int hour,mi,se;
    int total_hours;
    int total_min;
    int total_sec;
    public:
    derived()
    {
        hour=3;
        mi=2;
        se=5;
    }

    void add_time()
    {
        total_hours=hours+hour;
        total_min=min+mi;
        total_sec=sec+se;
    }
};

class friend_derived: virtual public base,virtual public derived
{
    protected:
    int final_hours,final_min,final_sec;
    public:
    void sub()
    {
        final_hours=total_hours-hours;
        final_min=total_min-min;
        final_sec=total_sec-sec;
    }

    void display()
    {
        cout<<"Base class Time :\nHours : "<<hours<<"\t\tMinutes : "<<min<<"\tSecond : "<<sec<<endl<<endl;
        cout<<"Derived class Time :\nHours : "<<total_hours<<"\tMinutes : "<<total_min<<"\tSecond : "<<total_sec<<endl<<endl;
        cout<<"Friend Derived class Time :\nHours : "<<final_hours<<"\tMinutes : "<<final_min<<"\tSecond : "<<final_sec<<endl<<endl;
    }

};

int main()
{
    system("cls");
    friend_derived h;
    derived d;
    h.get_input();
    h.add_time();
    h.sub();
    h.display();
    return 0;
}