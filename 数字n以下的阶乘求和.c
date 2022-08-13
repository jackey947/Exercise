#include<stdio.h>
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	int n = 4;
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
		sum = sum + ret;
	}
	printf("数字%d以下的阶乘和为%d\n", n, sum);
	return 0;
}