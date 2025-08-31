#include<iostream>
using namespace std;
class radius
{
    float r;
    public:
    
   void get_radius()
   {
       cout<<"Enter the radius : ";
       cin>>r;
    }
    float get_r()
    {
        return r;
    }
   
};
class area:public radius
{
    float a;
    public:
    void get_area()
    {
        a=3.14*get_r()*get_r();
        cout<<"Area of circle is : "<<a<<endl;
    }
   
};
int main()
{
    area ar;
    ar.get_radius();
    ar.get_area();
    return 0;
}
