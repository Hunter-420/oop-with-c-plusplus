// What is type casting? WAP to convert polar to rectangle form
/*
Type Casting
->Process to convert from one type of datatype to another type
->Some times we need some specific value which in any form like an integer,flot or string
    so with the help of typecasting method we can easily change the data type of the variable 
    into our desired datatype
->eg:
   string input_string="123" //string data type
   int input_integer=int(input_string) //type cast from string to integer

*/

// converting polar to rectangle form
/*
To convert polar to rectangle form--
polar_form  =   r[cos(angle)+isin(angle)]
rectangle_form  =   x   +   iy
where,
x   =   r   *   cos(angle)
y   =   r   *   sin(angle)

After subsituting these values in rectangle_form than we are sucessfully changed polar to rectangle

For that we need two header file
#include<iostream>
#include<math.h>

*/
#include<iostream>
#include<math.h>
using namespace std;

class convert
{
    private:
    int x,y;

    public:
    void polar_rectangle(int r,int angle)
    {
        x=r*cos(angle);
        y=r*sin(angle);
        cout<<"It's rectangular form is "<<x<<" + i("<<y<<")"<<endl;
    }
};

int main()
{
    system("cls");
    convert h;
    h.polar_rectangle(5,10);
    return 0;
}