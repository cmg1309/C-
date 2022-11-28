#include<stdio.h>

#define PI 0.621371                  // 마일을 대체했음

int main(void)
{
	int L = 0;

	printf("길이를 입력:");
	scanf_s("%d", &L);
	printf("마일 : %f", L * PI);      // 출력을 실수형태로 함

	return 0;
}