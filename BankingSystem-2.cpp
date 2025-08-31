#include<iostream>
#include<stdexcept>
using namespace std;
class bank_account 
{
    double balance;
public:
    bank_account(double amt) 
    {
        if(amt<0) 
        throw invalid_argument("Balance must be positive!");

        balance = amt;
    }
    void withdraw_money(double amount) 
    {
        if(amount<=0) 
        throw invalid_argument("Amount must be positive!");

        if(balance-amount<0)
        throw logic_error("Not enough Balance for Withdrawal!");

        balance-=amount;
        cout<<endl;
        cout<<"Withdrew Rs. "<<amount<<" succesfully!";
    }
    void deposit_money(double amount) 
    {
        if(amount<=0) 
        throw invalid_argument("Amount must be positive!");

        balance+=amount;
        cout<<endl;
        cout<<"\nDeposited Rs. "<<amount<<" succesfully!";
    }
    void display() 
    {
        cout<<endl;
        cout<<"Current Balance: Rs. "<<balance;
    }
};
int main() 
{
    try 
    {
        bank_account a(1000);

        a.deposit_money(200);
        a.withdraw_money(50);
        a.display();
    } 
    catch(invalid_argument& e) 
    {
        cout<<"\n\nCaught Invalid Argument: "<<e.what();
    }
    catch(logic_error& e) 
    {
        cout<<"\n\nCaught Logical Error: "<<e.what();
    }
    
    return 0;
}

/*+----------------------------+
|      bank_account          |
+----------------------------+
| - balance: double          |
+----------------------------+
| + bank_account(amt: double)|
| + withdraw_money(amount: double) |
| + deposit_money(amount: double)  |
| + display()                |
+----------------------------+
*/
