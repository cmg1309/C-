//임의의 달을 입력해서 상반기인지 하반기인지 출력하기

#include<stdio.h>

int main(void)
{
	int a = 0;

	printf("임의의 달을 입력 :");
	scanf_s("%d", &a);

	((a < 7) ? printf("%d월은 상반기입니다.\n", a) : printf("%d월은 하반기입니다.\n", a));

	return 0;
}