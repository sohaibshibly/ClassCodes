#include <stdio.h>
int main()
{
    double a;
    int p=0, n=0;
    for (;;)
    {
        scanf("%lf", &a);
        if (a > 0)
            p = p + 1;
        else if (a < 0)
            n = n + 1;
        else
            break;
    }
    printf("Positive numbers: %d\nNegative numbers: %d", p, n);
 
    return 0;
}
