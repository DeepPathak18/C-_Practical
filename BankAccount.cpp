#include<iostream>
#include<string>
using namespace std;

class account_details
{
    string name;
    long int acc_number,balance=0,i_balance,depositemoney,withdrawmoney;

    public:
    void add_acc_details();
    void deposite_money();
    void withdraw_money();
    void display_acc_deatils();
    long int getacc_number();

};
void account_details::add_acc_details()
{
    cout<<"Enter Your Name : ";
    cin>>name;  
    cout<<"Enter Your Account Number : ";
    cin>>acc_number;
    cout<<"Enter Your amount which you add intiallly : ";
    cin>>i_balance;
    balance+=i_balance;
    cout<<"Thank you for creating Account!!"<<endl;
    cout<<"Your Current Balance:"<<balance<<endl;
}
void account_details::deposite_money()
{
    cout<<"Enter Your Amount which you deposite :";
    cin>>depositemoney;
    balance+=depositemoney;
    cout<<"Your Current Balance:"<<balance<<endl;
}
void account_details::withdraw_money()
{
    cout<<"Enter Your Amount which you withdraw :";
    cin>>withdrawmoney;
    if(withdrawmoney > balance)
    {
        cout<<"Insufficient balance in your account"<<endl;
    }
    else
    {
        balance -= withdrawmoney;
        cout<<"Your Current Balance: "<<balance<<endl;
    }
}
void account_details::display_acc_deatils()
{
    cout<<"Account Holder Name: "<<name<<endl;
    cout<<"Account Number: "<<acc_number<<endl;
    cout<<"Current Balance: "<<balance<<endl;
}
long int account_details::getacc_number()
{
    return acc_number;
}

int main()
{
    account_details p[25];
    int choice,n;
    cout<<"Enter Number of Account Holder : ";
    cin>>n;
    start:
    cout<<"-----------------------------------"<<endl;
    cout<<"Banking Option!!"<<endl;
    cout<<" Enter 1 for Add Account Details"<<endl;  
    cout<<" Enter 2 for Deposite Money"<<endl;
    cout<<" Enter 3 for Withdraw Money"<<endl;
    cout<<" Enter 4 for Display Account Details"<<endl;
    cout<<" Enter 5 for Exit"<<endl;
    
    cout<<"Enter Your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            for(int i=0;i<n;i++)
            {
                p[i].add_acc_details();
            }
            break;
        case 2:
        int acc_no1;
        cout<<"Enter Your Account Number to Deposite money:";
        cin>>acc_no1;
        for(int i=0;i<n;i++)
        {
            if(p[i].getacc_number()==acc_no1)
        {
            p[i].deposite_money();
            break;
        }
        }
        break;
        case 3:
        int acc_no2;
        cout<<"Enter Your Account Number to Withdraw money:";
        cin>>acc_no2;
        for(int i=0;i<n;i++)
        {
            if(p[i].getacc_number()==acc_no2)
        {
            p[i].withdraw_money();
            break;
        }
        }
        break;
        case 4:
        int acc_no3;
        cout<<"Enter Your Account Number to displaying account details:";
        cin>>acc_no3;
        for(int i=0;i<n;i++)
        {
            if(p[i].getacc_number()==acc_no3)
            {   
            p[i].display_acc_deatils();
            break;
            }
        } 
        break; 
        case 5:
        cout<<"Existing !! Thank You!!"<<endl;
        break;
        default: 
        cout<<"Invalid Choice!! Try Again"<<endl;
    }
    goto start;
    
}
