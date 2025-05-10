#include<iostream>
using namespace std;

class Coordinate 
{
    int x,y;
public:
    Coordinate(int x,int y) 
    {
        this->x=x;
        this->y=y;
    }
    Coordinate operator+(const Coordinate &c) 
    {
        Coordinate point(0,0);
        point.x=x+c.x;
        point.y=y+c.y;
        return point;
    }
    Coordinate operator-(const Coordinate &c) 
    {
        Coordinate point(0,0);
        point.x=x-c.x;
        point.y=y-c.y;
        return point;
    }
    int operator==(const Coordinate &c) 
    {
        return (x==c.x && y==c.y) ? 1 : 0;
    }
    void display() 
    {
        cout<<"Coordinate:(" << x << ", " << y << ")"<<endl;
    }
};
int main() 
{
    int choice;
    int x1,y1,x2,y2;
    cout<<"Enter coordinates for Point 1 (x y): ";
    cin>>x1>>y1;
    Coordinate c1(x1,y1);
    cout<<"Enter coordinates for Point 2 (x y): ";
    cin>>x2>>y2;
    Coordinate c2(x2, y2);

Again:
    cout << "\nSelect operation to perform:\n";
    cout << "Enter >1< for Add Points\n";
    cout << "Enter >2< for Subtract Points\n";
    cout << "Enter >3< for Check if Points are Equal\n";
    cout << "Enter >4< for Exit\n";
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;
    switch (choice)
    {
    case 1: 
        Coordinate c3=c1+c2;
        cout<<"Result of addition: ";
        c3.display();
        goto Again;
    
    case 2: 
        Coordinate c4=c1-c2;
        cout<<"Result of subtraction: ";
        c4.display();
        goto Again;
    
    case 3: 
        if(c1==c2) 
        {
            cout<<"The points are equal."<<endl;
        }
        else 
        {
            cout<<"The points are not equal."<<endl;
        }
        goto Again;
    
    case 4:
        cout<<"Exiting program."<<endl;
        return 0;
    default:
        cout << "Invalid choice."<<endl;
        goto Again;
    }
    return 0;
}/*
+-------------------------------------+
|             Coordinate              |
+-------------------------------------+
| - x: int                            |
| - y: int                            |
+-------------------------------------+
| + Coordinate(x: int, y: int)        |
| + operator+(c: Coordinate): Coordinate |
| + operator-(c: Coordinate): Coordinate |
| + operator==(c: Coordinate): int    |
| + display(): void                   |
+-------------------------------------+

*/