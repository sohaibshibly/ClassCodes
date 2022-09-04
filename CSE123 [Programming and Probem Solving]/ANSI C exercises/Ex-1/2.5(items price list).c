#include <stdio.h>
int main()
{
    float p1, p2;

    printf("Enter price of rice per kg\n");
    scanf("%f", &p1);

    printf("Enter price of sugar per kg\n");
    scanf("%f", &p2);

    printf("*** LIST OF ITEMS ***\n");
    printf("Item\t   "); printf("Price\n");
    printf("Rice\t   "); printf("Rs %.2f\n", p1);
    printf("Sugar\t   "); printf("Rs %.2f", p2);


    return 0;
}
