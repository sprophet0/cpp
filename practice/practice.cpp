#include<iostream>
using namespace std;
int num1, num2, result;
char operation;
class Operate
{public:
    int Sum(int num1, int num2)
    {
        return num1 + num2;
    }

    int Mult(int num1, int num2)
    {
        return num1 * num2;
    }

    int Sub(int num1, int num2)
    {
        return num1 - num2;
    }

    int Div(int num1, int num2)
    {   
        if (num2 == 0)
        {
            cout << "undefined behavior\n";
        }
        else
        return num1 / num2;
    }

};



int main()
{   Operate operate;
    cout << "enter the desired operation (+, -, / or *)\n";
    cin >> std::ws >> operation;
    cout << "enter the first and second numbers in order\n";
    cin >> num1 >> num2;
    switch (operation)
    {
    case '+':
        cout << "the result is: "<< operate.Sum(num1, num2) << endl;
        break;
    
    case '-':
        cout << "the result is: "<< operate.Sub(num1, num2) << endl;
        break;

    case '/':
        cout << "the result is: "<< operate.Div(num1, num2) << endl;
        break;

    case '*':
        cout << "the result is: "<< operate.Mult(num1, num2) << endl;
        break;
    
    default:
        cout << "invalid operation!!!\n";
        break;
    }
    return 0;
}