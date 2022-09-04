#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
	double r, p, a;
	r = sqrt(4 * 4 + 5 * 5);
	p = 2 * PI * r;
	a = PI * r * r;
	printf("Perimeter = %lf\nArea = %lf", p, a);

	return 0;
}