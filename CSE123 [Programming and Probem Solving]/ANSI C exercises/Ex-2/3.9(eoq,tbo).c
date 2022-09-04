#include<stdio.h>
#include<math.h>
int main()
{
	double dr, sc, hc, eoq, tbo;
	printf("enter demand rate: ");
	scanf("%lf", &dr);
	printf("enter setup cost: ");
	scanf("%lf", &sc);
	printf("enter holding cost: ");
	scanf("%lf", &hc);
	eoq = sqrt((2 * dr * sc) / hc);
	tbo = sqrt((2 * sc) / (dr * hc));

	printf("EOQ = %lf\nTBO = %lf", eoq,tbo);


	return 0;

}