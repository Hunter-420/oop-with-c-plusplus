/*
    Create a class called mountain with data member name,height & location, a constructor that initialize the members to 
    the values passed to it as parameter, a function called CmpHeight() to compare two objects and 
    DisplayInfo() to display the information of mountain. In main, create two ojects of the class mountain and print
    the information of mountain which is greatest height

*/

//Github link - https://github.com/Hunter-420/oop-with-c-plusplus.git

#include<iostream>
using namespace std;

void DisplayInfo(string n,int h,string l);

class mountain
{
    private:
    string name;
    int height;
    string location;

    public:
    mountain(string n,int h,string l)
    {
        name=n;
        height=h;
        location=l;
    }

    void CompHeight(mountain m)
    {
        if(height>m.height)
        {
            DisplayInfo(name,height,location);
        }
        else
        {
            DisplayInfo(m.name,m.height,m.location);
        }

    }

    void DisplayInfo(string n,int h,string l)
    {
        cout<<"Heighest Hight Mountain Details : "<<endl;
        cout<<"Name : "<<n<<endl;
        cout<<"Height : "<<h<<endl;
        cout<<"Location : "<<l<<endl;
    }
};

int main()
{
    system("cls");
    mountain m1("Machapuchre",7823,"Kaski");
    mountain m2("Sagarmatha",8848,"Solukhumbu");
    m1.CompHeight(m2);
    return 0;
}