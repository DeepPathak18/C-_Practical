#include<iostream>
#include<string>
using namespace std;
class Employee
{
    string name;
    double basic_salary;
    double bonus;
    double total_salary;
    public:
   void add_details()
   {
        cout<<"Enter the name of Employee : ";
        cin>>name;
        cout<<"Enter the basic salary of Employee : ";
        cin>>basic_salary;
   }
   void default_bonus()
   {
       bonus=5000.0;
   }
   void add_bonus()
   {
       cout<<"Enter the bonus of Employee : ";
       cin>>bonus;
   }
   inline double cal_total_salary()
   {
       total_salary=basic_salary+bonus;
       return total_salary;
   }
   void display_details()
   {
    cout<<"-------- Employee Details --------"<<endl;
     cout<<"Employee Name : "<<name<<endl;
     cout<<"Employee Basic Salary : "<<basic_salary<<endl;
     cout<<"Employee Total Salary : "<<total_salary<<endl;       
   }
    };

int main()
{
    Employee e;
    int n,choice;
    cout<<"Enter the no of Employee : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        e.add_details();
        cout<<"Does this employee have a customize bonus? (1/0) : ";
        cin>>choice;
        if(choice==1)
        {
            e.add_bonus();
            e.cal_total_salary();
        }
        else
        {
            e.default_bonus();
            e.cal_total_salary();
        }
    }
    for(int i=0;i<n;i++)
    {
        e.display_details();
    }
    return 0;
}