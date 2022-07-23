//Concatenate two string using "+" using function overloading


// C++ Program to concatenate two string
// using unary operator overloading
#include <iostream>
#include <string.h>

using namespace std;

class concat
{
    private:
    char first[20],last[20];

    public:
    concat(char s1[],char s2[])
    {
        strcpy(this->first,s1);
        strcpy(this->last,s2);
    }

    concat operator+()
    {
       cout<<"After concatenation :"<< strcat(first, last)<<endl;
    }

};

int main()
{
    system("cls");
    char str1[]="Nischal";
    char str2[]="Khanal";
    concat s(str1,str2);
    +s;
    return 0;
}