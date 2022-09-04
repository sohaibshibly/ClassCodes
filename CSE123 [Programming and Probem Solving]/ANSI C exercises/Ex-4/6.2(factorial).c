#include <stdio.h>
int main()
{
    int x,y,f;
    scanf("%d", &x);
    for(f=1;x>0;x--)
    {
        f = f * x;
    }
    printf("%d", f);

    return 0;
}
