#include <iostream>

class Counter
{
  private:
    int count;
 
  public:
    Counter() {
      count = 1;
      execute();
    }

    Counter(int i) {
      initialize(i);
      execute();
    }

    void initialize(int i){       
      count = i;
    }

    void execute()
    {
      std::string cmd;
      
      do
      {
        std::cout << "enter a command ('+', '-', '=' or 'q') " << std::endl;
        std::cin >> cmd;
        if (cmd == "+")
          increase();
        else if (cmd == "-")
          decrease();
        else if (cmd == "=")
          std::cout << "current value is: " << current_value() << std::endl;
        else
          std::cout << "invalid command" << std::endl;
      } while (cmd !="q");
      std::cout << "good bye" << std::endl;
      return ;
    };
    void increase ()
    {
      count++;
    }
    void decrease()
    {
      count--;
    }
    int current_value()
    {
      return(count);
    }
};

int main() {
  Counter* c = nullptr;
  int i;
  std::string answer;
  
  std::cout << "would you like to enter the initial value? (enter y / n): " << std::endl;
  std::cin >> answer;
  if (answer == "y")
  {
    std::cout << "enter the initial value: " << std::endl;
    std::cin >> i;
    c = new Counter(i);
  }
  else{
    c = new Counter();
  }

  delete c;

  return (0);
}