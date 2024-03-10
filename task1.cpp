#include <iostream>

class Calculator
{
  public:
    int num1;
    int num2;

  Calculator(double num1, double num2) {
    if (set_num1(num1) == false || set_num2(num2) == false)
    {
      std::cout << "Error: Invalid input" << std::endl;
    }
    else
    {
      std::cout << "num1 + num2 = " << add() << std::endl;
      std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
      std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
      std::cout << "num1 * num2 = " << multiply() << std::endl;
      std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
      std::cout << "num1 / num2 = " << divide_2_1() << std::endl;
      
    }
  }

  double add()
  {
    return num1 + num2;  
  }

  double multiply()
  {
    return num1 * num2;
  }

  double subtract_1_2()
  {
    return num1 - num2;
  }

  double subtract_2_1()
  {
    return num2 - num1;
  }

  double divide_1_2()
  {
    return num1 / num2;
  }

  double divide_2_1()
  {
    return num2 / num1;
  }

  bool set_num1(double num1)
  {
    if (num1 == 0)
    {
      return false;
    }
    else
    {
      this->num1 = num1;
      return true;
    }
  }

  bool set_num2(double num2)
  {
    if (num2 == 0)
    {
      return false;
    }
    else
    {
      this->num2 = num2;
      return true;
    }
  }
      
};

int main() {
  double num1;
  double num2;
  
  std::cout << "Enter number 1: ";
  std::cin >> num1;
  std::cout << "Enter number 2: ";
  std::cin >> num2;

  Calculator c1 (num1, num2);

  return (0);  
}