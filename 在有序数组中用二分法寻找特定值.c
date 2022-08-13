#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binsearch(int x, int v[], int n)
{
	int left = 0;
	int right = n - 1;
	int mid = 0;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (v[mid] < x)
		{
			left = mid + 1;
		}
		else if (v[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int ret = 1;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int k = 0;
	scanf("%d", &k);
	ret = binsearch(k, arr, sz);
	if (ret != 0)
		printf("数字%d的下标是%d\n", k, ret);
	else
		printf("数组中没有数字%d\n", k);
	return 0;
}