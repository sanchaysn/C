#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "We can also add two strings but by this I do not mean mathemtical addition." << endl;
  string Firstname = "Sanchay";
  string Lastname = "Sn";
  string Fullname1 = Firstname.append(Lastname);
  string Fullname2 = Firstname + Lastname;
  cout << "This is fullname : "<< Fullname2 << endl;
  cout << "This is Firstname : " << Firstname << endl;
  cout << "This is Lastname : " << Lastname << "\n" << endl;

  string text = "ASDFGHJKLPOIUYTREWQAZXCVBNMKLP";
  cout << text << endl;
  cout << "\nLength of the text : " << text.size();

  cout << "We can access strings using the variable name with [letter number starting from 0]." << endl;
  cout << "Like third letter of variable text is : " << text[0];
  cout << "We can also change string value using this method." << endl;
  text[0] = 'B';
  cout << "First text is : " << text[0] << endl;
  // std::cout
  // std::string
}
