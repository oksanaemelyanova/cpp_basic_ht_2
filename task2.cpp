#include <iostream>

class Counter
{
  private:
    int count = 1;
 
  public:
     Counter() {
       initialize();
       execute();
     }

     void initialize() {
       int i;
       std::string answer;
       std::cout << "would you like to enter the initial value? (enter y / n): " << std::endl;
       std::cin >> answer;
       if (answer == "y")
       {
         std::cout << "enter the initial value: " << std::endl;
         std::cin >> i;
         count = i;
       }
       else
        count = 1;
     }

     void execute()
    {
      std::string cmd;
      
      while (1)
      {
        std::cout << "enter a command ('+', '-', '=' or 'q') " << std::endl;
        std::cin >> cmd;
        if (cmd == "+")
          count++;
        else if (cmd == "-")
          count--;
        else if (cmd == "=")
          std::cout << "current value is: " << count << std::endl;
        else if (cmd == "q")
        {
          std::cout << "good bye" << std::endl;
          return ;
        }
        else
          std::cout << "invalid command" << std::endl;
      }
    }

    
};

int main() {
  Counter count;

  return (0);
}