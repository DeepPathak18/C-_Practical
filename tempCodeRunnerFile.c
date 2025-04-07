#include<stdio.h>
int main()
{
    int n1,n2,gcd,lcm;
    printf("Enter First Number : ");
    scanf("%d",n1);
    printf("Enter second Number : ");
    scanf("%d",n2);

    while(n2!=0)
    {
        int temp=n2;
        n2=n1%n2;
        n1=temp;
        gcd=n1;
    }
    lcm=(n1*n2)/gcd;
    printf("The LCM of %d and %d is %d",n1,n2,lcm);


}