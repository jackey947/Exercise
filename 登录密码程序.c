#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = {0};
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (0 == strcmp(password, "947520"))
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf("�������������\n");
	}
	if (i == 4)
		printf("��¼�����ѱ�����\n");
	return 0;
}