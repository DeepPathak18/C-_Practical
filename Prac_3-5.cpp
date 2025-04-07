#include<iostream>
using namespace std;
class super_digit
{
    public:
    int sum_of_digit(string n)
    {
        int sum=0;
        for(char digit:n)
        {
            sum+=digit-'0';
        }
        return sum;
    }
    int super_digit_of_number(string n,int k)
    {
        long long initial_sum=(long long)sum_of_digit(n)*k;
        if(initial_sum<10)
        {
            return initial_sum;
        }
        else
        {
            return super_digit_of_number(to_string(initial_sum),1);
        }
    }
};
int main()
{
    string n;
    int k;
    cout<<"Enter the Number as a string: ";
    cin>>n;
    cout<<"Enter the Number of times you want to repeat the number : ";
    cin>>k;
    super_digit s;
    cout<<"The Super Digit of "<<n<<" is : "<<s.super_digit_of_number(n,k)<<endl;
    return 0;
}