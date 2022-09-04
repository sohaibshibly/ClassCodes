#include <stdio.h>
int main()
{
    int i,a;

    printf("* * * * * *\n");

    for (i = 1; i <= 4; i++)
    {

        for(a=0;a<=i;a++)
        {
            printf("  ");
        }
        for(a=1;a<=5-i;a++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
