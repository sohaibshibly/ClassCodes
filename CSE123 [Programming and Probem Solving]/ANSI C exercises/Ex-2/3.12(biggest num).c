#include<stdio.h>
int main()
{
	int a, b, c, i;
	i = 1;
	scanf("%d%d%d", &a, &b, &c);
	while (i <= a || i <= b || i <= c)
	{
		++i;
	}
	printf("%d", i-1);

	return 0;

}