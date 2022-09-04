#include <stdio.h>
int main()
{
    double sum=0, n, i;
    scanf("%lf", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1 / i;
    }
    printf("%lf", sum);



    return 0;
}
