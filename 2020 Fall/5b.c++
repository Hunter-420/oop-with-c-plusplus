/*
Templates-->
->Templates are the features added resently in c++

->It is a concept which enables us to define generic classes and function
     called as  generic programming

->Generic programming is an  approach where generic types are used as a parameter in
    algorithm.

->With the help of generic programming they work for a verity of suitable data types and
    Data structures

->A  template can be used to create a family of classes or functions

->Since the template is defined with parameter which is replaced by specific data type
    during the actual use of the classes or function.

->The templates are also known as parameterized class or function

$There are two types of templates
1. Function Template
2. Class Template

1. Function Tempalte
->Function template are the special type of function that can operate with generic type

->This allows us to create a function template whose functionality can be addapted to more
    than one type without repetating the entire code for each type

->We write a generic function that can be used for different data types

->Example of the function templates are sort(),max() etc

->Format
template<class A>
return_type function_name(A variable_name)
{
    //body of the function
}
Here template and classes are the keywords


2. Class Template
->Format
template<class A>
class class_name
{
    //class variable are anonymous type A
    // body of class
}

*/


// create a template to swap two integer and two floating point data
#include<iostream>
using namespace std;

template<class a,class b>
// void swap(a *num1,b *num2)
// {
//     cout<<"Before swaping : "<<*num1<<"&"<<*num2<<endl;
//     int *temp;
//     *temp=*num1;
//     *num1=*num2;
//     *num2=*temp;
//     cout<<"After swaping : "<<*num1<<"&"<<*num2<<endl;

// }

void swap(a num1,b num2)
{
    cout<<"Before swaping : "<<num1<<" & "<<num2<<endl;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swaping : "<<num1<<" & "<<num2<<endl;

}

int main()
{
    system("cls");
    // int a=5,b=4;
    // float c=5.6, d=2.3;
    // swap(&a,&c);
    // swap(&b,&d);
    swap(5,6);
    swap(5.6,4.5);
    return 0;
}