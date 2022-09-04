#include<stdio.h>
int main()
{
	int a, b, c, sum, lrg, sml;
	float avg;
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3;
	if (!(a < b || a < c))
	{
		lrg = a;
	}
	else if (!(b < a || b < c))
	{
		lrg = b;
	}
	else
	{
		lrg = c;
	}
	if (!(a > b || a > c))
	{
		sml = a;
	}
	else if (!(b > a || b > c))
	{
		sml = b;
	}
	else
	{
		sml = c;
	}

	printf("Sum = %d\nAverage = %f\nLargest = %d\nSmallest = %d", sum, avg, lrg, sml);

	return 0;

}