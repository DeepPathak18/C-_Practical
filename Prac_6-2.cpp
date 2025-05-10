#include<iostream>
using namespace std;
class Point 
{
    int x, y;
public:
    Point(int x=0,int y=0) 
    {
        this->x=x;
        this->y=y;
    }
    Point* move_x(int dx) 
    {
        x+=dx;
        return this;
    }
    Point* move_y(int dy) 
    {
        y+=dy;
        return this;
    }
    void display() 
    {
        cout<<"Point : ("<<x<<','<<y<<')'<<endl;
    }
};
int main() 
{
    int X, Y;
    cout<<"Enter X coordinate: ";
    cin>>X;
    cout<<"Enter Y coordinate: ";
    cin>>Y;

    Point* p = new Point(X, Y);
    p->display();
    
    int dx, dy;
    cout<<"Enter value to move in X direction: ";
    cin>>dx;
    cout<<"Enter value to move in Y direction: ";
    cin>>dy;
    p->move_x(dx)->move_y(dy);
    p->display();
    delete p;
    return 0;
}
/*+---------------------------+
|          Point            |
+---------------------------+
| - x: int                  |
| - y: int                  |
+---------------------------+
| + Point(x=0: int, y=0: int) |
| + move_x(dx: int): Point* |
| + move_y(dy: int): Point* |
| + display(): void         |
+---------------------------+
*/