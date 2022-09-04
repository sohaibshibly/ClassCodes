#include<stdio.h>
int main()
{
	int n, i, r, b;
	scanf("%d", &n);
	b = 0;
	for (i = 1; n > 0; i *= 10)
	{
		r = n % 2;
		n = n / 2;
		b = r * i + b;
	}
	printf("%d", b);

	return 0;
}