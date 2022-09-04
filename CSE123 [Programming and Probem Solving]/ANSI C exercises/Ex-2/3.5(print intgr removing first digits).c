#include<stdio.h>
int main()
{
	int n, i, r;
	scanf("%d", &n);
	r = n;
	while (n > 10)
	{
		for (i = 10; i < n; i *= 10)
		{
			r = n % i;
		}
		printf("%d\n", r);
		n = r;
	}

	return 0;

}