#include<iostream>
#include<string>
using namespace std;

class bank_account
{
    string acc_holder_name;
    int acc_no;
    double balance;
    static int total_account;
    public:
    void add_account();
    int get_acc_number();
    string get_acc_holdername();
    double get_balance();
    void deposit_money(double amount);
    void withdraw_money(double amount);
    void display_account();
    static int get_total_account()
    {
        return total_account;
    }
    static void transfer(bank_account &acc1,bank_account &acc2,double amount)
    {
        if(amount>0 && amount<=acc1.balance)
        {
            acc1.balance-=amount;
            acc2.balance+=amount;
            cout<<"Amount Transfered Successfully!!!"<<endl;
            cout<<"New Balance of "<<acc1.acc_holder_name<<" is : "<<acc1.balance<<endl;
            cout<<"New Balance of "<<acc2.acc_holder_name<<" is : "<<acc2.balance<<endl;
        }
        else
        {
            cout<<"Insufficient Amount plz try again......"<<endl;
        }
    }
};
int bank_account::total_account=0;
void bank_account::add_account()
{
    cout<<"-----------------------------------------------------------";
    cout<<"Enter Account Holder Name : ";
    cin>>acc_holder_name;
    cout<<"Enter Account Number of Account Holder :  ";
    cin>>acc_no;
    cout<<"Enter Your Intial balance in your Accouunt : ";
    cin>>balance;
    total_account++;
    cout<<"Bank Account Created successfully"<<endl;
}
int bank_account::get_acc_number()
{
    return acc_no;
}
string bank_account::get_acc_holdername()
{
    return acc_holder_name;
}
double bank_account::get_balance()
{
    return balance;
}
void bank_account::deposit_money(double amount)
{
   
    if(amount>0)
    {
        balance+=amount;
        cout<<"Amount Deposited Successfully!!!"<<endl;
        cout<<"New Balance is : "<<balance<<endl;
    }
    else
    {
        cout<<"Invalid Amount plz try again......"<<endl;
    }
}
void bank_account::withdraw_money(double amount)
{
  
    if(amount>0 && amount<=balance)
    {
        balance-=amount;
        cout<<"Amount Withdrawing Successfully!!!"<<endl;
        cout<<"New Balance is : "<<balance<<endl;
    }
    else
    {
        cout<<"Insufficient Amount plz try again......"<<endl;
    }
}
void bank_account::display_account()
{
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Account Holder Name : "<<acc_holder_name<<endl;
    cout<<"Account Number : "<<acc_no<<endl;
    cout<<"Account Balance : "<<balance<<endl;
}


int main()
{
    bank_account h[100];
    int n,choice;
    double amount;
    start:
    cout<<"-----------Details about Bank Account-----------"<<endl;
    cout<<"Enter 1 Add Account"<<endl;
    cout<<"Enter 2 Deposit Money"<<endl;
    cout<<"Enter 3 Withdraw Money"<<endl;
    cout<<"Enter 4 Display Account"<<endl;
    cout<<"Enter 5 Transfer Money"<<endl;
    cout<<"Enter 6 Exit"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>choice;
    switch(choice)
    {           
        case 1:
        cout<<"Enter the number of account you want to add : ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            h[i].add_account();
        }
        break;
        case 2:
        int acc_no;
        cout<<"Enter the Account Number in which you want to deposit money : ";
        cin>>acc_no;
        for(int i=0;i<n;i++)
        {
            if(acc_no==h[i].get_acc_number())
            {
                cout<<"Enter Your Money to deposited in your account : ";
                cin>>amount;
                h[i].deposit_money(amount);
            }
        }
        break;
        case 3:
        cout<<"Enter the Account Number in which you want to withdraw money : ";
        cin>>acc_no;
        cout<<"Enter Your Money to deposited in your account : ";
        cin>>amount;
        for(int i=0;i<n;i++)
        {
            if(acc_no==h[i].get_acc_number())
            {
                h[i].withdraw_money(amount);
            }
        }
        break;
        case 4:
        cout<<"Enter the Account Number which you want to display : ";
        cin>>acc_no;
        for(int i=0;i<n;i++)
        {
            if(acc_no==h[i].get_acc_number())
            {
                h[i].display_account();
            }
        }
        break;
        case 5:
        int acc_no1,acc_no2;
        double amount;
        cout<<"Enter the Account Number from which you want to transfer money : ";
        cin>>acc_no1;
        cout<<"Enter the Account Number to which you want to transfer money : ";
        cin>>acc_no2;
        for(int i=0;i<n;i++)
        {
            if(acc_no1==h[i].get_acc_number())
            {
                for(int j=0;j<n;j++)
                {
                    if(acc_no2==h[j].get_acc_number())
                    {
                        bank_account::transfer(h[i],h[j],amount);
                    }
                }
            }
        }
        break;
        case 6:
        cout<<"Thank You for using our service"<<endl;
        break;
        default:
        cout<<"Invalid Choice plz try again......"<<endl;
        goto start;
    }

    return 0;
}
