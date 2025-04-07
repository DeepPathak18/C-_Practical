#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, D, x1, x2;

    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    D = (b*b)-(4*a*c);

    if (D>0)
    {
        x1 = (-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);
        printf("The roots are real and distinct is  %.2f and %.2f\n", x1, x2);
    }
    else if (D==0)
    {
        x1 = -b/(2*a);
        printf("The root is real and same: %.2f\n", x1);
    }
    else
    {
        float realpart = -b/(2*a);
        float imaginarypart = sqrt(-D)/(2*a);
        printf("The roots are complex: %.2f + %.2fi and also a %.2f - %.2fi\n", realpart, imaginarypart, realpart, imaginarypart);
    }
    return 0;
}
