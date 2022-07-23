//WAP with class Fibo to realize the following code
/*
    Fibo f=1;
    for(i=1;i<=10;i++)
    {
        ++f;
        f.display;
    }

    Hint: overload "++" operator and conversion technique

*/

#include<iostream>
using namespace std;

template<class Fibo>
class fibo
{
    private:
    Fibo a,b,c;

    public:
    fibo()
    {
        a=-1;
        b=1;
        c=a+b;
    }

    fibo operator++()
    {
        
        a=b;
        b=c;
        c=a+b;
    }

    void display()
    {
         cout<<c<<"\t";
    }
};

int main()
{
    system("cls");
    fibo<int> f;
    cout<<"Fibonacci Number's are : "<<endl;
    for(int i=0;i<=10;i++)
    {
        f.display();  
        ++f;

    }
    return 0;
}