#include <stdio.h>
int main()
{
    int s[50];
    int n,b,found,
    i;
    scanf("%d%d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        found=0;
        if(s[i]==b)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
