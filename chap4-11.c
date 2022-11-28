#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("숫자 입력1:");
	scanf_s("%d", &a);
	printf("숫자 입력2:");
	scanf_s("%d", &b);
	printf("숫자 입력3:");
	scanf_s("%d", &c);

	printf("입력받은 숫자 중에 가장 큰 수는 %d입니다.", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));    
	// a가 b보다 크면 a>c를 실행해서 참이면 a, 거짓이면 c를 선택함.
	// a가 b보다 작으면 b>c를 실행해서 참이면 b, 거짓이면 c를 선택함.
	return 0;
}