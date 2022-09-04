#include<stdio.h>
#include<math.h>
int main()
{
	double d, u, t, a;
	printf("enter u: ");
	scanf("%lf", &u);
	printf("enter t: ");
	scanf("%lf", &t);
	printf("enter a: ");
	scanf("%lf", &a);
	d = u * t + (a * t* t * .5);
	printf("%lf", d);


	return 0;

}
