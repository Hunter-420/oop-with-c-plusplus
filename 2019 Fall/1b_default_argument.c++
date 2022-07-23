//PROBLEM
/*
    Set default argument at 8% & calculate 3 customer simple Intrest
*/

#include<iostream>
using namespace std;

class si
{
    private:
    float principle,rate,time,si;

    public:
    void get_data()
    {
        cout<<"Enter principle : "<<endl;
        cin>>principle;
        cout<<"Enter rate : "<<endl;
        cin>>rate;
        cout<<"Enter time : "<<endl;
        cin>>time;
        display_data(rate,principle,time);
    }

    void display_data(float rate=8,float p=0,float t=0)
    {
        si=(principle*rate*time)/100;
        cout<<"The simple interest is : "<<si<<endl;
    }
};

int main()
{
    system("cls");
    for(int i=0;i<3;i++)
    {
        si c[i];
        cout<<"\n\nEnter costumer ["<<i+1<<"] details"<<endl;
        c[i].get_data();
    }

    return 0;
}