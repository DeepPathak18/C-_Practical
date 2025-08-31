#include <iostream>
#include <string>
using namespace std;

class bank_account
{
    string acc_holder_name;
    long int acc_number, balance = 0;

public:
    void set_account_details()
    {
        cout << "Enter Name of Account Holder: ";
        cin>>acc_holder_name;
        cout << "Enter Account Number : ";
        cin >> acc_number;
    }
    void deposit_money(long int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "You Deposited: " << amount << endl;
            cout << "Your New Balance is : " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw_money(long int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "You Withdrawn: " << amount << endl;
            cout << "Your New Balance is : " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    void display_balance()
    {
        cout << "Account Holder name is : " << acc_holder_name << endl;
        cout << "Account Number is : " << acc_number << endl;
        cout << "Your Current Balance: " << balance << endl;
    }
};

int main()
{

    bank_account account1;
    account1.set_account_details();
    bank_account account2;
    account2.set_account_details();
    cout << "-----------------------------" << endl;
    account1.display_balance();
    account1.deposit_money(200);
    account1.withdraw_money(100);
    cout << "-----------------------------" << endl;
    account2.display_balance();
    account2.deposit_money(500);
    account2.withdraw_money(300);
    return 0;
}
