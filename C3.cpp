#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Types of variable : \n";
    cout << "int : It contains integers like 12, -15 \n";
    cout << "double or float : It contains decimal numbers like 192.5, 12.6 \n";
    cout << "char : It stores single character or letter for example \'a\' or \'A\' and it is all enclosed in single quote \n";
    cout << "string : It stores texts such as \"Hello Friend\", These are surrounded by double quote \n";
    cout << "bool : It gives value in only two states or form which is either true or false / 1 or 0 \n\n";
    cout << "Example : \n" << endl;
    int num = 14;
    num = 15;
    cout << "int : " << num << endl; // As i can if we assign a new value to old variable the old variable will be overwritten.
    double dnum = 192.5;
    cout << "double : " << dnum << endl;
    float fnum = 192.5;
    cout << "float : " << fnum << endl;
    char cletter = 'A';
    cout << "char : " << cletter << endl;
    string sword = "Hello Friend";
    cout << "string : " << sword << endl;
    bool bvalue = true;
    cout << "bool : " << bvalue << endl;
    cout << "\nWe can also declare more than one variable using comma : " << endl;
    int x = 4, y = 3, z = x;
    cout << "x : " << x << "\ny : " << y << "\nz : " << z << "\nSum : " << x+y+z << endl;
    cout << "If we don\'t others to alter our variable we can use const keywork :" << endl;
    const int cnum = 156; // This variable can now not be altered
    cout << cnum << endl;
    return 0;
}
