#include<iostream>
using namespace std;
void ShowBalance(double balance);
double Withdraw(double WithdrawnAmount);
double WithdrawnAmount;
double deposit;
double balance = 0;
int choice = 0;
bool exit1 = 0;
double Deposit(double deposit);
int main()
{   while(!exit1){
    cout << "select what you want to do:\n(1-Show Balance)\n(2-Deposit Money)\n(3-Withdraw Money)\n(4-Exit)\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ShowBalance(balance);
        break;

    case 2:
        cout << "Enter deposit amount: ";
        cin >> deposit;
        balance = Deposit(deposit);
        break;

    case 3:
        cout << "Enter withdrawal amount: ";
        cin >> WithdrawnAmount;
        balance = Withdraw(WithdrawnAmount);
        break;
    case 4:
        exit1 = 1;
        break;

    default:
        cout << "invalid choice\n";
        break;
    }}
    return 0;
}

double Withdraw(double WithdrawnAmount)
{
    balance -= WithdrawnAmount;
    cout << "you withdrew " << WithdrawnAmount << " $\n";
    return balance;
}

double Deposit(double deposit)
{
    balance += deposit;
    cout << "you deposited " << deposit << " $\n";
    return balance;
}

void ShowBalance(double balance)
{
    cout << "Your balance is " << balance << " $\n";
}
