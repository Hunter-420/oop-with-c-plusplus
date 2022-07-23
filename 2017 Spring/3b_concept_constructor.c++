/*
    create a class time a constructor having hours, minute and second as an arguments is use to take two time data from user.
    The add function that takes two time data from user. The add dunction that takes two class objects an arguments adds 
    them respectively then display aggregate result? (Apply 60 second=1 minute and 60 minutes =1 hour)
*/

#include<iostream>
using namespace std;

class time
{
    private:
    int hour,min,sec,sum,new_hour,rem_min,new_min;
    public:
    time()
    {

    }

    time(int h,int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }

    void add(time obj)
    {
        time c;
        c.hour=hour+obj.hour;
        c.min=min+obj.min;
        c.sec=sec+obj.sec;
        sum=(c.hour*60*60)+(c.min*60)+c.sec;
        new_hour=(sum)/(60*60);
        rem_min=(sum)%(60*60);
        new_min=rem_min/60;
        cout<<"\n\nFirst object time : "<<endl;
        cout<<"Hours : "<<hour<<"\tMinute : "<<min<<"\tSecond : "<<sec<<endl<<endl;
        cout<<"Second object time : "<<endl;
        cout<<"Hours : "<<obj.hour<<"\tMinute : "<<obj.min<<"\tSecond : "<<obj.sec<<endl<<endl;
        cout<<"Time after calculation : "<<endl;
        cout<<"Hours : "<<new_hour<<"\tMinute : "<<new_min<<endl;
    }

};

int main()
{
    system("cls");
    time c1(1,2,3),c2(3,5,3);
    c1.add(c2);
    return 0;
    

}