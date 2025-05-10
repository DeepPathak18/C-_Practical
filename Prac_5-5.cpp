#include <iostream>
#include <vector>
#include <memory> 
#include <cmath> 
using namespace std; 
class shape
{
public:
    virtual double area() const = 0; 
    virtual void display() const = 0; 
    virtual ~shape() {}              
};
class rectangle:public shape 
{
    double length;
    double width;
public:
    rectangle(double l,double w):length(l),width(w) {}
    double area() const override 
    {
        return length * width;
    }
    void display() const override 
    {
        cout<<"Rectangle Area is : "<<area()<<endl;
    }
};
class circle:public shape
{
    double radius;
public:
    circle(double r):radius(r) {}
    double area() const override 
    {
        return 3.14*radius*radius;
    }
    void display() const override 
    {
        cout<<"Circle Area is : "<<area()<<endl;
    }
};
int main() 
{
    
    vector<unique_ptr<shape>> shapes;
    shapes.push_back(make_unique<rectangle>(4.0,5.0));
    shapes.push_back(make_unique<circle>(3.0));

    for (const auto& shape:shapes) 
    {
        shape->display();
    }
    return 0;
}
/*        +--------------------+
        |      shape         |  <<abstract>>
        +--------------------+
        | + area(): double   |
        | + display(): void  |
        +--------------------+

               ▲
               |
   +---------------------+         +---------------------+
   |     rectangle       |         |       circle        |
   +---------------------+         +---------------------+
   | - length: double     |        | - radius: double     |
   | - width: double      |        +---------------------+
   +---------------------+        
   | + rectangle(l, w)    |        | + circle(r)          |
   | + area(): double     |        | + area(): double     |
   | + display(): void    |        | + display(): void    |
   +---------------------+         +---------------------+
*/