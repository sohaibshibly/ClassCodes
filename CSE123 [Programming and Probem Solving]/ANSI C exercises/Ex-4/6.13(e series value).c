#include<stdio.h>
int main()
{
    int i, n, j;
    double f=1, e=1, E=0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j > 0; j--)
        {
            f = f * j;
        }
        e = e + (1 / f);
        if(e-E<0.00001)
            break;
        E = e;
    }
    printf("%lf", e);

    return 0;
}
