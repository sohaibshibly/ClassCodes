#include <stdio.h>

int main()
{
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    if(m<n)
    {
        sum=n-m;
    }
    printf("%d\n",sum+n);

    return 0;
}
