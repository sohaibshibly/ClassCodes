#include <stdio.h>
#include<string.h>
void p(char s[50])
{
    int len,i,not;
    len=strlen(s);

        not=0;
        for(i=0;i<len/2;i++)
        {
            if(s[i]!=s[len-1-i])
            {
                not=1;
                break;
            }
        }

    if(not==1)printf("No\n");
    else printf("Yes\n");
}
int main()
{
    char a[50];
    scanf("%s",&a);
    p(a);


    return 0;
}
