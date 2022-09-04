#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
	double d,r,area;

	d = sqrt(pow(2 - 5, 2) + pow(5 - 6, 2));
	r = d / 2;

	area = PI * r * r;

	printf("area = %lf", area);


	return 0;
}
