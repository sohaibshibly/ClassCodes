#include <stdio.h>
int main()
{
    float a,b,d;
    printf("Enter a float number\n");
    scanf("%f", &a);

    printf("Enter another float number\n");
    scanf("%f", &b);

    d = a / b;

    printf("First number = %f\n",a);
    printf("Second number = %f\n",b);
    printf("Quotient = %f",d);

    return 0;
}
