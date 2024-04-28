#include <iostream>

class Calculator
{
  private:
    int num1;
    int num2;

  public:
    Calculator(double num1, double num2) {
      set_num1(num1); 
      set_num2(num2);
      std::cout << "num1 + num2 = " << add() << std::endl;
      std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
      std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
      std::cout << "num1 * num2 = " << multiply() << std::endl;
      std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
      std::cout << "num1 / num2 = " << divide_2_1() << std::endl;
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

  void set_num1(double num1)
  {
    this->num1 = num1;
  }

  void set_num2(double num2)
  {
    this->num2 = num2;
  }
      
};

int main() {
  double num1;
  double num2;
  
  std::cout << "Enter number 1: ";
  std::cin >> num1;
  std::cout << "Enter number 2: ";
  std::cin >> num2;

  if (num1 == 0 || num2 == 0)
  {
    std::cout << "Error: Invalid input" << std::endl;
    return(-1);
  }
  Calculator c1 (num1, num2);

  return (0);  
}