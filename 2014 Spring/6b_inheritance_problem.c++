//PROBLEM
/*
    create a class person with data members Name , Age and address. Create another class teacher with data member 
    qualification and department. Also create another class student with data member  program & semester. Both
    classes are inherited from the class person. Every class has at least one constructor which uses base class 
    constructor. Create member function show data() in each to display the information of the class member.
*/

#include<iostream>
using namespace std;

class person
{
    protected:
    string name,address;
    int age;

    public:
    person()
    {
        name="Nischal";
        age=20;
        address="Balkumari";
    }
};

class teacher:virtual public person
{
    protected:
    string qualification,department;
    public:
    teacher()
    {
        qualification="Engineer";
        department="Technology";
    }
};

class student:virtual public person,virtual public teacher
{
    protected:
    string program,semester;
    public:
    student()
    {
        program="BEIT";
        semester="2nd";
    }

    void show_data()
    {
        cout<<"Name : "<<name <<endl;
        cout<<"Age : "<<age <<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Qualification :  "<<qualification <<endl;
        cout<<"Department : "<<department<<endl;
        cout<<"Program : "<<program <<endl;
        cout<<"Semester :  "<<semester <<endl;

    }
};

int main()
{
    system("cls");
    student s;
    s.show_data();
    return 0;
}