#include <stdio.h>
int main()
{
    int p, n, i, v;
    float r;
    scanf("%d\n%f\n%d", &p, &r, &n);
    printf("p= %d\nr= %.2f\nn= %d\n", p, r, n);
    for (i = 1; i <= n; i++)
    {
        v = p * (1 + r);
        p = v;
    }

    printf("v= %d\n", v);

    return 0;
}
