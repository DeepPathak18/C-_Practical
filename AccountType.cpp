#include <iostream>
using namespace std;

class bank_account 
{
protected:
    int acc_number, balance, old_balance;
public:
    bank_account(int a,int b)
    {
        acc_number=a;
        balance=b;
        old_balance=balance;
    }
};
class saving_account:public bank_account 
{
    float interest_rate;
public:
    saving_account(int a,int b,float r):bank_account(a,b)
    {
        interest_rate=r;
        cout<<"Saving Account created successfully!!!!"<<endl;
    }
    void deposit_money(int amount) 
    {
        old_balance=balance;
        balance+=amount;
        cout<<"Amount "<<amount<<" deposited successfully!!!!"<<endl;
        cout << "Current balance: "<<balance<<endl;
    }
    void withdraw_money(int amount) {
        old_balance=balance;
        balance-=amount;
        cout<<"Amount "<<amount<<" withdrawn successfully!!!!"<<endl;
        cout<<"Current balance: "<<balance<<endl;
    }
    void cancel_transaction()
    {
        balance=old_balance;
        cout<<"Undo Transaction Successfully..... and current balance: "<<balance<<endl;
    }
};
class current_account:public bank_account 
{
    int over_limit;
public:
    current_account(int a,int b,int ol=0):bank_account(a,b) 
    {
        over_limit = ol;
        cout<<"Current account created successfully!!!!!"<<endl;
    }
    void deposit_c_money(int amount) 
    {
        old_balance=balance;
        balance+=amount;
        cout<<"Amount "<<amount<<" deposited successfully!!!!"<<endl;
        cout<<"Current balance: "<<balance<<endl;
    }
    void withdraw_c_money(int amount) 
    {
        old_balance=balance;
        if(amount>balance+over_limit)
        {
            cout<<"Amount is not sufficient to withdraw....."<<endl;
        }
        else
        {
            balance-=amount;
            cout<<"Amount "<<amount<<" withdrawn successfully!!!"<<endl;
            cout<<"Current balance: "<<balance<<endl;
        }
    }
    void cancel_transaction() 
    {
        balance=old_balance;
        cout<<"Undo Transaction successfylly.... and current balance: "<<balance<<endl;
    }
};
int main() 
{
    int a,b,ol,amount;
    float ir;
    int choice,ch;

    cout<<"Enter >1< to create Saving Account"<<endl;
    cout<<"Enter >2< to create Current Account"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice) 
    {
        case 1: 
        {
            cout<<"Enter account number: ";
            cin>>a;
            cout << "Enter initial balance: ";
            cin>>b;
            cout<<"Enter interest rate: ";
            cin>>ir;
            saving_account S(a,b,ir);

            do
            {
                cout<<"\nEnter >1< for Deposit Amount"<<endl;
                cout<<"Enter >2< for Withdraw Amount"<<endl;
                cout<<"Enter >3< for Undo your last transaction"<<endl;
                cout<<"Enter >0< for Exit"<<endl;
                cout<<"Enter your choice: ";
                cin>>ch;

                switch(ch) 
                {
                    case 1:
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        S.deposit_money(amount);
                        break;
                    case 2:
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        S.withdraw_money(amount);
                        break;
                    case 3:
                        S.cancel_transaction();
                        break;
                    case 0:
                        cout << "Thank you!!! Exiting !!!" << endl;
                        break;
                    default:
                        cout<<"Enter valid choice!"<<endl;
                }
            } 
            while(ch!= 0);
            break;
        }

        case 2: 
        {
            cout<<"Enter account number: ";
            cin>>a;
            cout<<"Enter initial balance: ";
            cin>>b;
            cout<<"Enter overdraft limit: ";
            cin>>ol;
            current_account C(a,b,ol);

            do 
            {
                cout<<"\nEnter >1< for Deposit Amount"<<endl;
                cout<<"Enter >2< for Withdraw Amount"<<endl;
                cout<<"Enter >3< for Undo your last transaction"<<endl;
                cout<<"Enter >0< for Exit"<<endl;
                cout<<"Enter your choice: ";
                cin>>ch;

                switch (ch)
                {
                    case 1:
                        cout<<"Enter amount to deposit: ";
                        cin>>amount;
                        C.deposit_c_money(amount);
                        break;
                    case 2:
                        cout<<"Enter amount to withdraw: ";
                        cin>>amount;
                        C.withdraw_c_money(amount);
                        break;
                    case 3:
                        C.cancel_transaction();
                        break;
                    case 0:
                        cout<<"Thank you!!! Exiting!!! "<<endl;
                        break;
                    default:
                        cout<<"Enter valid choice!"<<endl;
                }
            }
            while (ch!=0);
            break;
        }

        default:
            cout<<"Enter valid choice! Try again."<<endl;
    }
    return 0;
}
