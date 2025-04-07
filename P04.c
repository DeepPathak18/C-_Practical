#include<stdio.h>
int main()
{
    int n1,n2,gcd,lcm,realn1,realn2;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter second Number : ");
    scanf("%d",&n2);
    realn1=n1;
    realn2=n2;

    while(n2!=0)
    {
        int temp=n2;
        n2=n1%n2;
        n1=temp;
        gcd=n1;
    }
    lcm=(realn1*realn2)/gcd;
    printf("The LCM of %d and %d is %d",realn1,realn2,lcm);


}