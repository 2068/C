#include<stdio.h>
int main()
{
	int x;
	int isPrime = 1;
	scanf("%d", &x);
	int i;
	for (i = 2; i<x; i++)
	{
		if (x%i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1)
	{
		printf("Isprime\n");
	}
	else
	{
		printf("Notprime\n");
	}
	return 0;
}