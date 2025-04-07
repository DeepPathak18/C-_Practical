#include <stdio.h>
int main()
{
    float H,L,D;
    printf("Enter Hieght and Length Accordingly: ");
    scanf("%f %f",&H,&L);
    D=((L*L)-(H*H))/2*H;
    printf("The Depth of Lake is %.2f\n",D);
    return 0;
}

