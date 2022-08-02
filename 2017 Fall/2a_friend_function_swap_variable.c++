//WAP to swap variable of two classes using friend function

#include<iostream>
using namespace std;

class B;

class A
{
    private:
    int num;

    public:
    A()
    {
        num=3;
    }
    friend void swap(class A,class B);
};

class B
{
    private:
    int b;


    public:
        B()
    {
        b=4;
    }
    friend void swap(class A,class B);
};

void swap(A obj1,B obj2)
{
    cout<<"Before swaping : "<<endl;
    cout<<"Class A value is : "<<obj1.num<<"\t class B value is : "<<obj2.b<<endl<<endl;
    int temp;
    temp=obj1.num;
    obj1.num=obj2.b;
    obj2.b=temp;
    cout<<"After swaping : "<<endl;
    cout<<"Class A value is : "<<obj1.num<<"\t class B value is : "<<obj2.b<<endl;

}

int main()
{
    system("cls");
    A n;
    B k;
    swap(n,k);
    return 0;
}

