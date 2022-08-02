// WAP to concatinate two string (name and address of a person) using the concept of containership

#include <iostream>
#include <string.h>

using namespace std;

class name_address
{
private:
    char name[30];
    char address[30];

public:
    name_address(char str1[], char str2[30])
    {
        strcpy(this->name, str1);
        strcpy(this->address, str2);
        string concat = strcat(name, address);
        cout << "After Concatination : " << concat;
    }
};

int main()
{
    system("cls");
    char str1[] = "Nischal";
    char str2[] = " Balkumari";
    name_address obj(str1, str2);
    return 0;
}