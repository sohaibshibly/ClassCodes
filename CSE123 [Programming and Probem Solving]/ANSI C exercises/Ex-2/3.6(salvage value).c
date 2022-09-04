#include<stdio.h>
int main()
{
	double p, s, d, y;
	printf("Enter purchase price:");
	scanf("%lf", &p);
	printf("\nEnter years of service:");
	scanf("%lf", &d);
	printf("\nEnter annual depreciation:");
	scanf("%lf", &y);
	s = p - d * y;
	printf("Salvage value : %lf", s);

	return 0;

}