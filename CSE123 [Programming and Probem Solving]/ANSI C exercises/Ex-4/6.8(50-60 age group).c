#include <stdio.h>
int main()
{
    int i,n,age;
    n = 0;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &age);
        if (age < 50 || age>60)
            continue;
        n += 1;

    }
    printf("%d", n);

    return 0;
}
