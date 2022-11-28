// 5-8
#include<stdio.h>

int main(void)
{
	int n = 0, m = 0;							// n은 입력값, m은 출력값

	printf("반대로 출력할 정수를 입력 : ");
	scanf_s("%d", &n);
	printf("\n입력된 정수를 반대로 출력 : ");

	do
	{
		m = n % 10;								// m(출력값)은 n을 10으로 나눈 나머지
		printf("%d", m);
		n = n / 10;								// n(입력값)은 n에 10을 나눈 몫
	} while (n);
	printf("\n");
}