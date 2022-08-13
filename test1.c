#include<stdio.h>
int main()
{
	int n = 3;
	int sum = 1;
	int i = 0;
	for (i = 1; i < n + 1; i++)
	{
		sum = i * sum;
	}
	printf("%d\n",sum);
	return 0;
}