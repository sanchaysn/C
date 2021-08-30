#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text = "Hello Friend";
  int i = 0;

// While loop

  while (i < 5)
  {
    cout << text << endl;
    i++;
  }

// Do while loop

  do
  {
    cout << text << endl;
  } while (i < 5);

  return 0;
}
