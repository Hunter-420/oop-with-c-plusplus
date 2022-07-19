// Constructor
/*
-> A constructor is a special type of function whose task is to initiallize the object of class

-> It is special because it's name is same as the name of class

-> The constructor is invoked whenever the object of the respective class is created

-> It is called constructor because it constructs the value of data members of the class

-> Contructor must be in public section

-> They can't have any return type even void therefore they can't return any values

-> Like other C++ function, constructor also have default arguments

-> Constructor can not be virtual

-> There are three types of condtructor:
    1. Default Constructor
    2. Parametarized Constructor
    3. Copy Constructor

*/

//Distructor
/*

-> Distructor is used to destruct the object which are created by constructor

-> It is also a special type function which name is same as the name class name but 
    it is preceded by tilde(~)

-> A distructor never takes any argument nor return any value

-> It will be invoked implectly by the compiler upon exit from the program
    to clean up storage that is no longer accessible

-> It is good practice to decleare destructor in a program since it release memory
    for future use

-> Whenever new is used to allocate memory in the constructor, we should use 
    delete to free the allocate memory

-> For example, the destructor for class integer can be defined as 
    ~integer()

*/

//Why destructor can't take any argument
/*
    The main task of destructor is to destroy the object by freeing its dynamic memory
    when it falls out of scope. 
    Most of the times a destructor is called automatically by the compiler. 
    Allowing argument(s) in the destructor would make it a difficult task for compiler as 
    compiler 
    wouldn’t know what arguments to use when calling the destructor. 
    Also, allowing argument(s) to destructor 
    doesn’t make sense.
    We want to destroy the whole object and not a part of it anyway.
*/


#include<iostream>
using namespace std;

int count=0;

class matrix
{

public:
 matrix()
    {
            count++;
            cout<<"No of Object Created "<<count<<endl;
            
    }

    ~matrix()
    {
            
            cout<<"No of Object Destroyed "<<count<<endl; 
            count--;

    }

};

int main()
{
    system("cls");
    matrix b,c,d,e;
    cout<<"\n\n";
    return 0;
}

