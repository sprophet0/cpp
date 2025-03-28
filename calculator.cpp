#include <iostream>

class Calculator{
    public:
    int num1, num2;

    Calculator(int a, int b) : num1(a), num2(b) {}


int add(){
   return num1 + num2;
 }

int sub(){
    return num1 - num2;
  }

double div(){
    if (num2 == 0) {
        std::cerr << "Error: Division by zero!\n";
        return 0; // Returning 0 for division by zero
    }
    return num1 / num2;
  }

  int mult(){
    return num1 * num2;
  }
};


int main(){
    int a, b;
    char operation;

    std::cout << "enter the first number " << std::endl;
    std::cin >> a;
    std::cout << "enter the second number " << std::endl;
    std::cin >> b;

    Calculator calc(a, b);

    std::cout << "enter the operation";
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        std::cout << "result: " << calc.add() << std::endl;
        break;
    case '-':
        std::cout << "result: " << calc.sub() << std::endl;
        break;
    case '/':
        std::cout << "result: " << calc.div() << std::endl;
        break;
    case '*':
        std::cout << "result: " << calc.mult() << std::endl;
        break;        
    
    default:
        std::cout << "invalid operator" << std::endl;
        break;
    }


return 0;
}