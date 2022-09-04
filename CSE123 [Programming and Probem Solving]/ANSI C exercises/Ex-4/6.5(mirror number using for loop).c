#include <stdio.h>
int main()
{
    int x,  n;
    scanf("%d", &x);
    for (;x >0;x = x / 10)
    {
        n = x % 10;

        printf("%d", n);

    }

    return 0;
}
