#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int length=0,i=0;
    printf("Enter Your String :");
    fgets(s,20,stdin);

    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    printf("Length of string is %d",length);

}