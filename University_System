#include<iostream>
#include<string.h>
using namespace std;

class student
{
    int id,m1,m2,m3;
    float avg;
    char name[25];

    public:
    void add_st_data(int w,char abc[25],int x,int y,int z)
    {
        id=w;
        strcpy(name,abc);
        m1=x;
        m2=y;
        m3=z;
        cal_avg();
    }
    void cal_avg()
    {
        avg=(m1+m2+m3)/3.0;
    }
    void display_data()
    {
        cout<<"Id Number:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"marks of subject 1 is: "<<m1<<endl;
        cout<<"marks of subject 2 is: "<<m2<<endl;
        cout<<"marks of subject 3 is: "<<m3<<endl;
        cout<<"avg marks of subject :"<<avg<<endl;
        cout<<"-----------------------------------"<<endl;
    }
};
int main()
{
    student s[10];
    s[0].add_st_data(1,"deep",23,24,25);
    s[1].add_st_data(2,"ram",23,24,25);
    s[2].add_st_data(3,"radhe",23,24,25);
    s[3].add_st_data(4,"utsav",23,24,25);

    for(int i=0;i<4;i++)
    {
        s[i].display_data();
    }
}
