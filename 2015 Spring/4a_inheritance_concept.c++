/* class record derives information from both account and admin. classes and turn derived information from the class person
Define all the four classes with at least one parametarized constructor and void display method in each
class. In main() function crete the object of the class record and initilize all the data member and display them
*/

#include<iostream>
using namespace std;

class person
{
    protected:
    string name,code;
    public:
    person()
    {
        name="Nischal";
        code="347X";
    }
};

class account:virtual public person
{
    protected:
    int salary;
    public:
    account()
    {
        salary=37465755;
    }
};

class admin:virtual public person
{
    protected:
    int no_year_of_expri;
    public:
    admin()
    {
        no_year_of_expri=5;
    }

};

class record:virtual public account,virtual public admin
{
    protected:
    int record_no;
    public:
    record(int r)
    {
        record_no=r;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Code : "<<code <<endl;
        cout<<"Salary : "<<salary <<endl;
        cout<<"No of Year of Experience  : "<<no_year_of_expri <<endl;
        cout<<"Record No  : "<<record_no <<endl;
    }


};


int main()
{
    system("cls");
    //call record constructor and pass the value of record
    record r(34);
    r.display();
    return 0;
}