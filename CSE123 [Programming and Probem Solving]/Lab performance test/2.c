#include <stdio.h>
#include<string.h>
int main()
{
    char n[20],first,last;
    scanf("%s",&n);
    first=n[0]-48;
    last=n[strlen(n)-1]-48;
    printf("%d",first+last);


    return 0;
}
