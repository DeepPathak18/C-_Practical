#include<iostream>
using namespace std;

class Calculator
{
    public:
    int add(int n1,int n2)
    {
          int sum=n1+n2;
          cout<<"Sum of "<<n1<<" and "<<n2<<" is: "<<sum<<endl;
    }

    float add(float n1,float n2)
    {
        float sum=n1+n2;
       cout<<"Sum of "<<n1<<" and "<<n2<<" is: "<<sum<<endl;
    }

};
int main()
{
    Calculator num;
    num.add(5,4);
    num.add(3.62f,8.25f);
 return 0;
}
