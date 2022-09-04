#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s, area,x;
	scanf("%lf%lf%lf", &a, &b, &c);
	s = (a + b + c) / 2;
	x = s * (s - a) * (s - b) * (s - c);
	area = sqrt(x);
	printf("%lf", area);

	return 0;
}