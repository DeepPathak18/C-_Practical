#include <stdio.h>
int main()
{
    int n,length,width;
    printf("Enter size of rectengular theater square according to length and width :");
    scanf("%d %d",&length,&width);
    printf("enter the size of flagstone:");
    scanf("%d",&n);

    int numflagstoneslength =(length+n-1)/ n;
    int numflagstoneswidth =(width+n-1)/n;

    int totalflagstones=numflagstoneslength*numflagstoneswidth;

    printf("%d",totalflagstones);

    return 0;
}

