#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int t=0;
	while (x > 0)
	{
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	}
	printf("%d\n", t);
	return 0;
}