//WAP to findout the largest number among 4 . Your program should have 3 class and each class have one integer number

#include<iostream>
using namespace std;

class b;
class c;
class a
{
    private:
    int n1;
    public:
    a()
    {
        n1=2;
    }
    friend void comp(class a,class b,class c);
};

class b
{
    private:
    int n2;
    public:
    b()
    {
        n2=50;
    }
    friend void comp(class a,class b,class c);
};

class c
{
    private:
    int n3;
    public:
    c()
    {
        n3=6;
    }
    friend void comp(class a,class b,class c);
};

void comp(a o1,b o2,c o3)
{
    if(o1.n1>o2.n2 && o3.n3)
    {
        cout<<"Class a have highest value "<<o1.n1<<endl;
    }

    else if(o2.n2>o3.n3)
    {
        cout<<"Class b have highest value "<<o2.n2<<endl;
    }

    else
    {
        cout<<"Class c have highest value "<<o3.n3<<endl;
    }
}

int main()
{
    system("cls");
    a n;
    b i;
    c s;
    comp(n,i,s);
    return 0;
}