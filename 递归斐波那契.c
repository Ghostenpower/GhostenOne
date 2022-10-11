#include<stdio.h>

int mun(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}

	else
	{
		n = mun(n - 1) + mun(n - 2);
		return n;
	}
}

int main()
{
	int b = 0;
	scanf("%d", &b);
	int a = mun(b);
	printf("%d", a);

	return 0;
}
