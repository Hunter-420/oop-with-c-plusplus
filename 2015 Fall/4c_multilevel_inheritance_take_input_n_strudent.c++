// Wap to input the info of n student and then display it using the concept of mulitlevel inheritance

#include<iostream>
using namespace std;

class declare
{
    protected:
    int n;
    string *name=new string[n];
    int *age=new int[n];
    string *college=new string[n];
    public:
    declare()
    {
        cout<<"Enter how many student data you want to fill : "<<endl;
        cin>>n;

        system("cls");
    }
};

class input:virtual public declare
{
    public:
    input()
    {
        cout<<" n : "<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"\nEnter the student : "<<endl;
            cout<<"Name , age & college : "<<endl;
            cin>>name[i]>>age[i]>>college[i];
        }
    }
};

class info:virtual public declare,virtual public input
{
    public:
    info()
    {
        cout<<"\n\n\nStudent Information : "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Age : "<<age[i]<<endl;
            cout<<"College : "<<college[i]<<endl<<endl;
        }
    delete [] name;
    delete [] age;
    delete [] college;
    }
};

int main()
{
    system("cls");
    info h;
    return 0;
}