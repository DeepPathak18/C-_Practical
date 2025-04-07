#include <stdio.h>
#include <math.h>
void decimalToOctal(int n) {
    int octal[100], i = 0;
    while (n != 0) {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }

    // Print the octal number in reverse order
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main()
{
    double binarynum;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lf",&binarynum);
    int n=binarynum;

     while (n!= 0)
    {
        remainder =n%10;
        decimal += remainder * pow(2, i);
        n /= 10;
        i++;
    }


    return 0;
}
