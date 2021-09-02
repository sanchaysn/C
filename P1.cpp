#include <iostream> // included iostream library
#include <cmath>
#include <string>

using namespace std;

void calc(int num1, int num2, char sign)
{
  switch(sign) // if else if condition can also be used instead of switch
  {
    case '+': // ++++++++++
    cout << "\n" << num1 << " + " << num2 << " = " << num1+num2 << endl;
    break;
    case '-': // ----------
    cout << "\n" << num1 << " + " << num2 << " = " << num1 - num2 << endl;
    break;
    case '/': // //////////
    cout << "\n" << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    break;
    case '*': // **********
    cout << "\n" << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;
  }
}

void func(int num3, char word, string mfunc)
{
  if (mfunc == "sin")
  {
    cout << "\n" << "sin of " << num3 << " = " << sin(num3) << endl;
  } else if (mfunc == "tan")
  {
    cout << "\n" << "tan of " << num3 << " = " << tan(num3) << endl;
  } else if (mfunc == "cos")
  {
    cout << "\n" << "cos of " << num3 << " = " << cos(num3) << endl;
  } else if (mfunc == "log")
  {
    cout << "\n" << "log of " << num3 << " = " << log(num3) << endl;
  } else if (mfunc == "sqrt")
  {
    cout << "\n" << "square of " << num3 << " = " << sqrt(num3) << endl;
  } else if (mfunc == "round")
  {
    cout << "\n" << "round of " << num3 << " = " << round(num3) << endl;
  } else {
    cout << "All out" << endl;
  }
}

void ans(int num1 = 0, int num2 = 0, int num3 = 0, char sign = 'X', char word = 'X', string mfunc = "sin")
{
  if (word == 'c' || word == 'C') // N for calculation
    {
      calc(num1, num2, sign);
    } else if (word == 'f' || word == 'F')
    {
      func(num3, word, mfunc);
    }
}

int main()
{
  int x;
  int y;
  int z;
  char r = 'y';
  char s;
  char w;
  string mfunc;
  do
  {
    cout << "\nEnter the number one for calculation else leave it by typing 0 : " << endl;
    cin >> x;
    cout << "Enter the number second for calculation else leave it bt typing 0 : " << endl;
    cin >> y;
    cout << "Enter the muber third if want to perform a function else leave it if want to perform calculation by typing 0 : " << endl;
    cin >> z;
    cout << "Enter C for calculation and f for function c/f : " << endl;
    cin >> w;
    cout << "Enter operator else leave it if want to perform a function by typing X : " << endl;
    cin >> s;
    cout << "Enter the name of function else leave it by typing X : " << endl;
    cin >> mfunc;
    ans(x, y, z, s, w, mfunc);
    cout << "\nAnything else y/n : ";
    cin >> r;
  } while (r == 'y');
  return 0;
}
