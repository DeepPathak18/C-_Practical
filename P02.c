#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[50];
    printf("Enter a String:");
    fgets(s,50,stdin);

    for(int i=0;s[i]!='\0';i++)
    {
        if (islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
    else if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
    }
    printf("Your New String: %s",s);
}
