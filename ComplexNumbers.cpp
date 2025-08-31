#include<iostream>
using namespace std;
class complex_num
{
     public:
    int real_num,img_num;
 complex_num(int x, int y)
{
    real_num = x;
    img_num = y;
}
complex_num operator+ (complex_num &c) 
{
       complex_num num(0,0);
       num.real_num=real_num+c.real_num;
       num.img_num=img_num+c.img_num;
       return num;
}
complex_num operator- (complex_num &c) 
{
       complex_num num(0,0);
       num.real_num=real_num-c.real_num;
       num.img_num=img_num-c.img_num;
       return num;
}
};
int main()
{
    complex_num c1(6,5);
    complex_num c2(3,3);
    complex_num c3=c1+c2;
    complex_num c4=c1-c2;
    cout<<"The Sum is "<<c3.real_num<<"+i"<<c3.img_num<<" "<<endl;
    cout<<"The Sub is "<<c4.real_num<<"+i"<<c4.img_num<<" "<<endl;

}
