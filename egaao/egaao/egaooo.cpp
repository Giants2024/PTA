#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("您的电脑将在1min后关机，若想解除，请输入:我是猪\n");
	scanf("%s", input);
	if (strcmp("我是猪", input) == 0)
	{
		system("shutdown -a");
	}
	else
		goto again;
	return 0;
}
