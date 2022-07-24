/*
    Create a class called Employee with data member code,name,address,salary. Create a constructor to initilize the data
    member. Also create another constructor so that we can create an object from another object. Define member function display()
    to display the information of class
*/

#include<iostream>
using namespace std;

class employee
{
    protected:
    string code,name,address;
    int salary;

    public:
    employee()
    {
        code="547X";
        name="Nischal";
        address="Balkumari";
    }
};

class employee_info:public employee
{
    public:
    employee_info()
    {

    }

    void display()
    {
        cout<<"Details of Employee :"<<endl;
        cout<<"Code : "<<code<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
    }

};

int main()
{
    system("cls");
    employee_info e;
    e.display();
    return 0;
}