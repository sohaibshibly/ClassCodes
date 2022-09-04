#include<stdio.h>
int main()
{
	int a, b, c, x;

	a = 300;
	b = 70;
	c = 70;
	printf("x = %lf", x = a / (b - c)); //dividing by b-c=0 will cause an error. Hence the output will be undefined.


	return 0;
}