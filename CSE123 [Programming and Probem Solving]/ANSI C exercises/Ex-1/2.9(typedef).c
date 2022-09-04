#include <stdio.h>
int main()
{
    int a = 1;
    typedef int newint;   //Now it's possible to declare int types with newint
    newint b = 2;       
    printf("a = %d\n", a);
    printf("b = %d", b);

 
    return 0;
}
