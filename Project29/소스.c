#define _CRT_NO_SECURE_WARINIGS
#include<stdio.h>

int main(void)
{
	char str[80];
	int line = 0;

	printf("ют╥б : ");
	scanf_s("%s", str, 80);
	line = strlen(str);
	printf("%d\n", line);
}