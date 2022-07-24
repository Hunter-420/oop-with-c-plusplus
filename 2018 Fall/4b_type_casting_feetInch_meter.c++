/*
    write a program to read a height of a person in feet and inches and convert it into meter using user defined
    to class type conversion method 1 meter = 3.28084 feet , 1 feet = 12 inch
*/

#include<iostream>
using namespace std;

class conversion
{
    private:
    float meter,feet,inch;
    float total_meter,total_feet,inch_feet;

    public:
    void get_data()
    {
        cout<<"Enter Details\nFeet\tInches"<<endl;
        cin>>feet>>inch;
    }

    void cast()
    {
        inch_feet=float(inch/12);
        total_feet=float(feet)+float(inch_feet);
        meter=float(total_feet/3.28084);
        cout<<"\nAfter Conversion Total Meter is : "<<meter<<endl;
    }
};

int main()
{
    system("cls");
    conversion c;
    c.get_data();
    c.cast();
    return 0;
}