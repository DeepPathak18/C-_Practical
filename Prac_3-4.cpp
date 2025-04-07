#include <iostream>
using namespace std;
class ram
{
public:
    template <typename T>
  T find_max(T arr[], int n)
    {
        T max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    template <typename T>
    void reverse_arr(T arr[], int n)
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(arr[i], arr[n - i - 1]);
        }
    }
    template <typename T>
    void display_arr(T arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    ram r;
    int int_arr[] = {25, 29, 35, 43, 57};
    float float_arr[]={54.35,23.45,67.89,12.34,56.78};
    char char_arr[]={'a','b','c','d','e'};
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"From Integer Typr Array : "<<endl;
    r.display_arr(int_arr,5);
    cout<<"If we trying to find the maximum value : "<<r.find_max(int_arr,5)<<endl;
    cout<<"If this will Reversing : "<<endl;
    r.reverse_arr(int_arr,5);
    r.display_arr(int_arr,5);
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"From Float Typr Array : "<<endl;
    r.display_arr(float_arr,5);
    cout<<"If we trying to find the maximum value : "<<r.find_max(float_arr,5)<<endl;
    cout<<"If this will Reversing : "<<endl;
    r.reverse_arr(float_arr,5);
    r.display_arr(float_arr,5);
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"From Char Typr Array : "<<endl;
    r.display_arr(char_arr,5);
    cout<<"If we trying to find the maximum value : "<<r.find_max(char_arr,5)<<endl;
    cout<<"If this will Reversing : "<<endl;
    r.reverse_arr(char_arr,5);
    r.display_arr(char_arr,5);
    

    return 0;
}