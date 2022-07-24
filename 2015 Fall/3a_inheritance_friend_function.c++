/*
    Create classes called class1 & class2 with each of having private member. Add member function to set a 
    value (say setvalue) on each class. Add one more function max() friendly to both classes. Max() function should 
    compare two private member of two classes and show maximum among them
*/

#include<iostream>
using namespace std;

class class2;

class class1
{
    private:
    int value1;
    public:
    void set_value(int v)
    {
        value1 =v;
    }

    friend void max(class1,class2);
};

class class2
{
    private:
    int value2;
    public:
    void set_value(int v)
    {
        value2=v;
    }
    friend void max(class1,class2);
};

void max(class1 obj1,class2 obj2)
{
    if(obj1.value1>obj2.value2)
    {
        cout<<"Class1 value is grater than class2 and the value is : "<<obj1.value1<<endl;
    }
    else
    {
         cout<<"Class2 value is grater than class1 and the value is : "<<obj2.value2<<endl; 
    }
}


int main()
{
    system("cls");
    class1 obj1;
    class2 obj2;
    obj1.set_value(4);
    obj2.set_value(5);
    max(obj1,obj2);
    return 0;
}

