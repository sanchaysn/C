#include <iostream> // included iostream library

int main()
{
  char sign; // used char because we had to take only one sign.
  int num1, num2;
  std::cout << "Enter the opreator (+, -, /, *) : " << std::endl;
  std::cin >> sign;
  std::cout << "Enter the number : " << std::endl;
  std::cin >> num1 >> num2;

  switch(sign) // if else if condition can also be used instead of switch
  {
    case '+': // ++++++++++
    std::cout << num1 << " + " << num2 << " = " << num1+num2;
    break;
    case '-': // ----------
    std::cout << num1 << " + " << num2 << " = " << num1 - num2;
    break;
    case '/': // //////////
    std::cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;
    case '*': // **********
    std::cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;
  }
  return 0;
}
