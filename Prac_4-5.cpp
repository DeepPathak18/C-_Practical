#include<iostream>
#include<string>
using namespace std;
class grading_framework
{
    protected:
    string name;
    float m1,m2,m3;
    public:
    virtual void get_insert()=0;
    virtual void calculate()=0;
    virtual void display()=0;

};
class UG_students : public grading_framework
{
    public:
    void get_insert() override
    {
        cout<<"Enter the name of student : ";
        cin>>name;
        cout<<"Enter the marks of 3 subjects : ";
        cin>>m1>>m2>>m3;
    }
    void calculate() override
    {
        cout<<"The average of 3 subjects : "<<(m1+m2+m3)/3<<endl;
    }
    void display() override
    {
        cout<<"------------------------------------------------"<<endl;
        cout<<"The name of student : "<<name<<endl;
        cout<<"The marks of 3 subjects : "<<m1<<","<<m2<<","<<m3<<endl;
        if ((m1+m2+m3)/3>=40)
        {
            cout<<"The student is pass"<<endl;
        }
        else
        {
            cout<<"The student is fail"<<endl;
        }
    }
};
class PG_students : public grading_framework
{
    public:
    void get_insert() override
    {
        cout<<"Enter the name of student : ";
        cin>>name;
        cout<<"Enter the marks of 3 subjects : ";
        cin>>m1>>m2>>m3;
    }
    void calculate() override
    {
        cout<<"The average of 3 subjects : "<<(m1+m2+m3)/3<<endl;
    }
    void display() override
    {
        cout<<"The name of student : "<<name<<endl;
        cout<<"The marks of 3 subjects : "<<m1<<","<<m2<<","<<m3<<endl;
        if ((m1+m2+m3)/3>=50)
        {
            cout<<"The student is pass"<<endl;
        }
        else
        {
            cout<<"The student is fail"<<endl;
        }
    }
};
int main()
{
    UG_students u;
    PG_students p;
    grading_framework *g1,*g2;
    g1=&u;
    g2=&p;
    int n;
    cout<<"Enter 1 for UG student and 2 for PG student : ";
    cin>>n;
    if (n==1)
    {
        g1->get_insert();
        g1->calculate();
        g1->display();
    }
    else if (n==2)
    {
        g2->get_insert();
        g2->calculate();
        g2->display();
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
   

    return 0;
}