#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char arr1[] = "Hello World!!!";
	char arr2[] = "******************";
	int sz = sizeof(arr1) / sizeof(arr1[0])-1;
	int i = 0;
	arr2[sz] = arr1[sz];
	sz=sz-1;
	while (i<=sz)
	{
		arr2[i] = arr1[i];
		arr2[sz] = arr1[sz];
		i++;
		sz--;
		printf("%s\n", arr2);
		Sleep(1000);
	}
	return 0;
}