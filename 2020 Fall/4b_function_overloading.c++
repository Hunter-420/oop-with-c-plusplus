#include<iostream>
using namespace std;

class mult
{
    private:
    int x,y,result;
    public:
    mult()
    {
        //default constructor
    }
    mult(int a)
    {
        x=a;
    }
    mult operator*(mult m)
    {
        mult temp;
        temp.result=x*m.x;
        return temp;
    }
    void display()
    {
        cout<<"The output is : "<<result;
    }
};

int main()
{
    system("cls");
    mult c1,c2,c3;
    c1=mult(2);
    c2=mult(4);
    c3=c1*c2;
    c3.display();
    return 0;

}