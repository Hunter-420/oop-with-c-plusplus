//initializing library
#include<iostream>
#include<string.h>
using namespace std;

//Create a class "Person" with data mamber name $ age
class person
{
    protected:
    string name;
    int age;

    public:
    //creating member function to get &initiallize the name & age
    void get_info()
    {
        cout<<"Enter Name :"<<endl;
        cin>>name;
        cout<<"Enter Age :"<<endl;
        cin>>age;
    }
    //creating member function to display the info
    void display()
    {
        cout<<"Name :"<<name<<endl<<"Age :"<<age<<endl;
    }
};

//Derive "student " from " person"
class student:public person
{
    protected:
    string college_name;
    string faculty;

    public:
    //creating constructor to initiallze 
    student()
    {
        college_name="Cosmos College Of Management & Technology";
        faculty="BEIT";
        cout<<"College Name : "<<college_name<<endl;
        cout<<"Faculty : "<<faculty<<endl;
    }
};

//Derive " Employee" from "person"
class employee:public person
{
    protected:
    string company_id;
    string company_name;
    int salary;

    public:
    employee()
    {
        company_id="234X";
        company_name="HuntTech pvt. lim.";
        salary=2003;

        cout<<"Company ID : "<<company_id<<endl;
        cout<<"Company Name : "<<company_name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

//creating main function
int main()
{
    system("cls");
    person p;
    p.get_info();
    system("cls");
    p.display();
    student k;
    employee h;
    //h.get_info;
    //h.display;
    return 0;

}