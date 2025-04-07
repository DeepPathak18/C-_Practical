#include <stdio.h>
#include <math.h>
int main()
{
    int num, tempnum, remainder, n = 0;
    double sum = 0;
    printf("Enter A Number: ");
    scanf("%d", &num);
    tempnum = num;
    while (tempnum != 0)
    {
        n++;
        tempnum /= 10;
    }
    tempnum = num;
    while (tempnum != 0)
    {
        remainder = tempnum % 10;
        sum += pow(remainder, n);
        tempnum /= 10;
    }
if (sum == num)
{
    printf("%d is an Armstrong number.\n", num);
}
else
{
    printf("%d is not an Armstrong number.\n", num);
}
}
