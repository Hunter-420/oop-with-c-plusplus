//Exception handeling in c++
/*
-> We often come across some particular problem other than logical & symantic, 
    called as exceptions

-> Exceptions are the run time unusual condition that a program encounter while executing

-> In C++ exception handeling mechanism build upon three keywords named as try, throw & catch

-> Try :
            used to preface a block of statements which may generate exception

-> Throw:
            When exception is detected, it is thrown using throw statement in try block

-> Catch:
            A catch block defined by catch keyword which catches exception which is thrown by 
            throw  statement in try block and handle it appropiately

            ------------------
            Try block
            ------------------
            Detects and throws
            an exception
            ------------------


            ------------------
            catch block
            ------------------
            catches and handles
            the exception
            -------------------

            The catch block that catches an exception must immediately follow the try block that throws the 
            exception. The general form is


            --------
            --------
            try
            {
                --------
                throw exception;
                --------
                //Block of statements which detects and throw an exception
            } 

            catch(type arg)
            {
                ------
                //Block of statements that handles the exception
                ------
            }

    
    //Control Flow Mechanism
    -> When the try block thrown an exception, the program control leaves try block and enter the catch statement
        of catch block

    -> Note that exceptions are the objects used to transmite the information about the problem

    -> If the type of object thrown matches the argument type in the catch statement than the catch block is
        execute to handel the exception

    -> If the type of object thrown can't match with argument type in the catch statement than the program is 
        aborted with the help of abort() function which is invoked by default

    -> When there is no any exception is detecte and thrown than control ges immediately after the catch block
        , this is how catch block skiped

    -> Let's understand try-catch machanism with the help of simple program:  
*/

#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int a,b;
    cout<<"Enter the value of a & b :"<<endl;
    cin>>a>>b;
    
    //try block start
    try
    {
        if(b!=0)
        {
            cout<<"The result is : "<<float(a)/float(b)<<endl;
        }
        else
        {
            throw(1);
        }
    }

    //catch block
    catch(int a)
    {
        cout<<"Exception Cought : b=0 "<<endl;
    }
    cout<<"Program Finished";
    return 0;
}