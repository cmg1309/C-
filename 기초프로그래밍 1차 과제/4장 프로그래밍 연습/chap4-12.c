#include<stdio.h>

int main(void)
{
	double T = 0, K = 0;

	printf("키 입력 : ");
	scanf_s("%lf", &T);
	printf("몸무게 입력 : ");
	scanf_s("%lf", &K);

	printf((K <= (T - 100) * 0.9) ? printf("정상입니다.") : printf("비만입니다."));     // 정확히 어떻게 푸는지 몰라서 출력하는 부분에 조건식을 넣어서 출력하게 했음.

	return 0;
}