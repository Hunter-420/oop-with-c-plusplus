/*
Friend Function
syntax of friend function

class class_2_name
class class_1_name
{
    decleare variale
    eg --
    int var1
    int var2
friend return_type function_name(class_1_name,class_2_name)
};

class class_2_name
{
    decleare variale
    eg --
    int var3
    int var4
friend return_type function_name(class_1_name,class_2_name)
};

return_type funct_name(class_1_name obj_1 , class_2_name obj_2)
{
    int sum
    sum=obj_1.var1+obj_1.var2+obj_2.var3+obj_2.var4;
}
IN MAIN FUNCTIION
int main()
{
    class_1_name obj_1;
    class_2_name obj_2;

    CALLING FUNCTION
    function_name(obj_1,obbj_2);
    return 0;

} 
*/

#include<iostream>
using namespace std;

class getnum_2;

class getnum_1
{
    private:
    int num1=5;
    int num2=6;
    
friend void calculate(getnum_1,getnum_2);
};

class getnum_2
{
    private:
    int num3=6;
    int num4=1;
    
friend void calculate(getnum_1,getnum_2);
};

void calculate(getnum_1 obj1,getnum_2 obj2)
{
    int sum;
    sum=obj1.num1+obj1.num2+obj2.num3+obj2.num4;
    cout<<"The sum is "<<sum;
}

int main()
{
    system("cls");
    getnum_1 obj1;
    getnum_2 obj2;
    calculate(obj1,obj2);
    return 0;
}
