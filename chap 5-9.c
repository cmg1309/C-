// 5-9
#include<stdio.h>

int main(void)
{
	int n = 0;
	const int n1200 = 12000000;								// 입력 연봉과 비교하는 변수값
	const int n4600 = 46000000;								// 입력 연봉과 비교하는 변수값
	const int n8800 = 88000000;								// 입력 연봉과 비교하는 변수값

	printf("평균 연봉 입력 : ");
	scanf_s("%d", &n);

	if (n >= 0)
		printf("입력한 연봉 : %10d\n", n);
	else
		printf("\n잘못된 입력입니다.");

	if (n > n8800)											// n(입력된 연봉)과 기준값을 비교해서 참이면 밑을 실행 거짓이면 else if로 넘어감
	{
		printf("\n세금 35%%적용 : %d", (int)(n * 0.35));	// n(입력된 연봉)에 세금을 곱한값 출력
		printf("\n---------------------------");
		printf("\n세금 24%% 적용 : %d", (int)(n * 0.24));
		printf("\n세금 15%% 적용 : %d", (int)(n  * 0.15));
	}
	else if (n > n4600)
	{
		printf("\n세금 24%% 적용 : %d", (int)(n * 0.24));
		printf("\n---------------------------");
		printf("\n세금 35%%적용 : %d", (int)(n * 0.35));
		printf("\n세금 15%% 적용 : %d", (int)(n * 0.15));

	}
	else if (n > n1200)
	{
		printf("\n세금 15%% 적용 : %d", (int)(n * 0.15));
		printf("\n---------------------------");
		printf("\n세금 24%% 적용 : %d", (int)(n * 0.24));
		printf("\n세금 35%%적용 : %d", (int)(n * 0.35));
	}
	else
	{
		printf("\n세금 6%% 적용 : %d", (int)(n * 0.06));
	}
}