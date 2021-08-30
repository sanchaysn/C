#include <iostream>

using namespace std;

int main()
{
  cout << "An example of If condition : "<< endl;
  int x, y;
  cout << "Enter the value of x : " ;
  cin >> x ;
  cout << "Enter the value of y : " ;
  cin >> y ;

  if (x > y || x < y) {
    cout << "\nAnything can now happen" << endl;
  }
  cout << "An example of If else condition : " << endl;
  if (x == y)
  {
    cout << "They are equal" << endl;
  } else {
    cout << "Anything can happen"  << endl;
  }
  cout << "An example of If else If condition : " << endl;
  if (x == 1)
  {
    cout << "This is one" << endl;
  } else if (x == 4)
  {
    cout << "This is four" << endl;
  } else {
    cout << "Anything can happen" << endl;
  }
  return 0;
}
