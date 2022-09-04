#include<stdio.h>
int main()
{
	int x = 1, y = 2, z = 3;
	int xt = x, yt = y, zt = z;
	x = yt; y = zt; z = xt;

	return 0;
}
