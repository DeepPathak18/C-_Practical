#include<iostream>
#include<string>
using namespace std;
class Person
{   
    string name;
    int age;
    public:
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }   
    void display_per_details()
    {
        cout<<" Employee Name : "<<name<<endl;
        cout<<"Employee Age : "<<age<<endl;
    }
};
class Employee: Person
{
    int Emp_ID;
    
    public:
    Employee(string name,int age,int Emp_ID):Person(name,age)
    {
        this->Emp_ID=Emp_ID;
    }
    void display_emp_details()
    {
        display_per_details();
        cout<<"Employee ID : "<<Emp_ID<<endl;
    }
};
class Manager: Employee
{
    string Department;
    public:
    Manager(string name,int age,int Emp_ID,string Department):Employee(name,age,Emp_ID)
    {
        this->Department=Department;
    }
    void display_manager_details()
    {
        display_emp_details();
        cout<<"Manager Department : "<<Department<<endl;
    }
};
int main()
{
    Manager m("Rambhai",22,101,"Marketing");
    m.display_manager_details();
    Employee e("Shyambhai",25,102);
    e.display_emp_details();
    return 0;
}