// 5-12
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i = 0, money = 1000000;										// 원금 100만원
	double rate = 0.045, total = 0;									// 이율 0.045

	for (i = 0; i < 10; i++)										// 1년부터 10년까지
	{
		total = money * pow((1 + rate), i);							// 년마다 만기시 총 수령액
		printf("%d년 만기시 총 수령액 : %.2f\n", i + 1, total);		// 1년부터 시작이라서 i+1
	}
}