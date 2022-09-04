#include <stdio.h>
int main()
{
    int x, n,sum;
    scanf("%d", &x);
    sum = 0;
    while (x > 0)
    {
        n = x % 10;
        x = x / 10;

        sum = sum + n;

    }
    printf("%d", sum);

    return 0;
}
