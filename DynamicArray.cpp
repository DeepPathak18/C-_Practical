#include<iostream>
using namespace std;
class dynamic_array 
{
    int* data;
    int size,capacity;
    void resize() 
    {
        capacity *= 2;
        int* new_data=new int[capacity];
        for(int i=0;i<size;i++) 
        {
            new_data[i]=data[i];
        }
        delete[] data;
        data = new_data;
    }
public:
    dynamic_array() 
    {
        size = 0;
        capacity = 2;
        data = new int[capacity];
    }
    void insert(int value) 
    {
        if(size==capacity) 
        {
            resize();
        }
        data[size] = value;
        size++;
    }
    void remove_at(int index) 
    {
        if(index<0 || index>=size) 
        {
            cout<<"Invalid index!!!!"<<endl;
            return;
        }
        for(int i=index;i<size-1;i++) 
        {
            data[i]=data[i+1];
        }
        size--;
    }
    void display() 
    {
        if(size==0) 
        {
            cout<<"Array is empty."<<endl;
            return;
        }
        cout<<"Current array: ";
        for(int i=0; i<size; i++) 
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    ~dynamic_array() 
    {
        delete[] data;
    }
};

int main() 
{
    dynamic_array arr;
    int choice, value, index;

    while(true) 
    {
        cout<<"\nEnter >1< Insert value"<<endl;
        cout<<"Enter >2< Delete by index"<<endl;
        cout<<"Enter >3< Display array"<<endl;
        cout<<"Enter >4< Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1) 
        {
            cout<<"Enter value to insert: ";
            cin>>value;
            arr.insert(value);
        }
        else if(choice==2) 
        {
            cout<<"Enter index to delete: ";
            cin>>index;
            arr.remove_at(index);
        }
        else if(choice==3) 
        {
            arr.display();
        }
        else if(choice==4) 
        {
            break;
        }
        else 
        {
            cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    return 0;
}
/*+---------------------------+
|       dynamic_array       |
+---------------------------+
| - data: int*              |
| - size: int               |
| - capacity: int           |
+---------------------------+
| + dynamic_array()         |
| + insert(value: int): void|
| + remove_at(index: int): void |
| + display(): void         |
| - resize(): void          |
| ~ dynamic_array()         |
+---------------------------+
*/
