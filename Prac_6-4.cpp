#include<iostream>
using namespace std;
class base 
{
public:
    base() 
    {
        cout<<"Base constructor Activated"<<endl;
    }
    virtual ~base() 
    {
        cout<<"Base destructor Activated"<<endl;
    }
};
class derived:public base 
{
    int* data;
public:
    derived() 
    {
        data=new int[5];
        cout<<"Derived constructor Activated"<<endl;
    }
    ~derived() 
    {
        delete[] data;
        cout<<"Derived destructor Activated"<<endl;
    }
};
int main() 
{
    base* ptr = new derived();
    delete ptr;
    return 0;
}
/*          +-------------------+
          |      base         |
          +-------------------+
          | + base()          |
          | + ~base()         |
          +-------------------+

                  ▲
                  |
           Inheritance
                  |
          +-------------------+
          |     derived       |
          +-------------------+
          | - data: int*      |
          +-------------------+
          | + derived()       |
          | + ~derived()      |
          +-------------------+
*/