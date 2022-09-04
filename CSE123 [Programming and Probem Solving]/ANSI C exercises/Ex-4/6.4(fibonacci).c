#include <stdio.h>
int main()
{
    int x=1, y=0, m,sum,i=1;
    scanf("%d", &m);

    do
    {
        sum = x + y;
        printf("%d ",sum);
        x = y;
        y = sum;
        i++;

    } while (i <= m);

    return 0;
}
