//can we use more than one constructor in same class
#include<iostream>
using namespace std;
class hunter
{
    public:
    hunter()
    {
        cout<<"Hello I am hunt"<<endl;
    }
    // hunter()
    // {
    //     int a=5;
    //     cout<<"The value of a is :"<<a;
    // }
};

int main()
{
    hunter d;
    return 0;
}

// So In conclusion we can't create multiple constructor in same class
