// Wap to input the info of n student and then display it using the concept of mulitlevel inheritance

#include<iostream>
using namespace std;

class declare
{
    protected:
    //suruma declare garne n lae
    int n;

    //aba hami dynamically allocate garxau hae
    string *name=new string[n];
    int *age=new int[n];
    string *college=new string[n];

    //aba n ko value ta lina paro aba hami haru sabbae kam ko lagi constructor ko use garxau hae tesle garda main function 
    //ma call garna easy hunxa
    public:
    declare()
    {
        cout<<"Enter how many student data you want to fill : "<<endl;
        cin>>n;

        system("cls");
    }
};

//aba multilevel inheritance ma ta ambiguty problem aehalxa taevayara hami virtual keyword ko use gari halxam
class input:public declare
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

class info:public input
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
    
    //memory leak huna bata bachna ko lagi delete ni gardina parxa
    delete [] name;
    delete [] age;
    delete [] college;
    }
};

int main()
{
    system("cls");
    //hamlae thaha xa constructor call garda mathibata talatira call hunxa sequence ma hunxa
    //for eg yadi hamle sab vanda last derived class ko object banayo vane base class ko constructor call hudae auxa
    info h;
    return 0;
}