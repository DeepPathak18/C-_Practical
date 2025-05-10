#include <iostream>
using namespace std;
class array_manager 
{
    int* arr1;
    int* arr2;
    int* merged;
    int size1, size2;
public:
    array_manager() 
    {
        arr1=0;
        arr2=0;
        merged=0;
        size1=size2=0;

        cout<<"Enter the size of the first array: ";
        cin>>size1;
        cout<<"Enter the size of the second array: ";
        cin>>size2;

        arr1=new int[size1];
        arr2=new int[size2];
        merged=new int[size1+size2];
    }

    ~array_manager() 
    {
        delete[] arr1;
        delete[] arr2;
        delete[] merged;
    }
    void input_arrays() 
    {
        cout<<"Enter elements of the first array: ";
        for (int i=0;i<size1;i++) 
        {
            cin>>arr1[i];
        }
        cout<<"Enter elements of the second array: ";
        for(int i=0;i<size2;i++) 
        {
            cin>>arr2[i];
        }
        sort_array(arr1,size1);
        sort_array(arr2,size2);
    }
    void sort_array(int* arr,int size) 
    {
        for(int i=0;i<size-1;i++) 
        {
            for(int j=0;j<size-i-1;j++) 
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    void merge_arrays() 
    {
        int i= 0,j=0,k=0;
        while(i<size1 && j<size2) 
        {
            if(arr1[i]<arr2[j]) 
            {
                merged[k++]=arr1[i++];
            } 
            else 
            {
                merged[k++]=arr2[j++];
            }
        }
        while(i<size1) 
        {
            merged[k++]=arr1[i++];
        }
        while(j < size2) 
        {
            merged[k++]=arr2[j++];
        }
    }
    void display() 
    {
        cout<<"\nMerged and Sorted array: ";
        for(int i=0;i<size1+size2;i++) 
        {
            cout<<merged[i] << " ";
        }
        cout << endl;
    }
};
int main() 
{
    array_manager a;
    a.input_arrays();
    a.merge_arrays();
    a.display();
    return 0;
}
/*+----------------------------------------+
|           array_manager                |
+----------------------------------------+
| - arr1: int*                           |
| - arr2: int*                           |
| - merged: int*                         |
| - size1: int                           |
| - size2: int                           |
+----------------------------------------+
| + array_manager()                      |
| + ~array_manager()                     |
| + input_arrays(): void                 |
| + sort_array(arr: int*, size: int): void |
| + merge_arrays(): void                |
| + display(): void                      |
+----------------------------------------+
*/