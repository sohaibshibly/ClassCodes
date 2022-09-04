//Using symbolic constant for determining the area of a circle
#include<stdio.h>
#define PI 3.14159
int main()
{
    double R, A;
    scanf("%lf", &R);
    A = PI * R * R;
    printf("Area = %lf\n", A);
    return 0;

}
