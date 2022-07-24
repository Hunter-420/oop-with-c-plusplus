#include <iostream>
using namespace std;

class feet_inch
{
private:
    float inch, feet;

public:
    feet_inch()
    {
    }

    int get_feet()
    {
        cout << "Enter Feet : " << endl;
        cin >> feet;
        return feet;
    }

    int get_inch()
    {
        cout << "Enter Inch : " << endl;
        cin >> inch;
        return inch;
    }
};

class convert_meter
{
private:
    float total_feet, total_inch, meter;

public:
    void operator=(feet_inch p)
    {
        float feet = p.get_feet();
        float inch = p.get_inch();
        float inch_feet = float(inch / 12);
        total_feet = float(feet) + float(inch_feet);
        meter = float(total_feet / 3.28084);
        cout << "\nAfter Conversion Total Meter is : " << meter << endl;
    }
};

int main()
{
    system("cls");
    feet_inch obj;
    convert_meter m;
    m = obj;
    return 0;
}