#include<iostream>
using namespace std;
int recursive_sum(int arr[],int n)
{
 if(n<=0)
 {
     return 0;
 }
    return recursive_sum(arr,n-1)+arr[n-1];
}
int iterative_sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array which number sum do you have : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int recursivesum=recursive_sum(arr,n);
    int iterativesum=iterative_sum(arr,n);
    cout<<"Your Recursive sum is : "<<recursivesum<<endl;
    cout<<"Your Iterative sum is : "<<iterativesum<<endl;
    return 0;
}