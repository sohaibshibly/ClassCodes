#include<stdio.h>
#include<math.h>
int main()
{
	double l, c, r, f;
	printf("enter L: ");
	scanf("%lf", &l);
	printf("enter C: ");
	scanf("%lf", &c);
	printf("enter R: ");
	scanf("%lf", &r);
	f = sqrt((1 / (l * c)) - ((r * r) / (4 * c * c)));
	printf("frequency = %lf", f);


	return 0;

}