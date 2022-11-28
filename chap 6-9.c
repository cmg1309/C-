// 6-9
#include<stdio.h>
#include<math.h>

double shortmoney(double a, double b, double c);		// 단리 계산 함수원형
double longmoney(double a, double b, double c);			// 복리 계산 함수원형

int main(void)
{
	int year = 0, money = 0;
	double rate = 0, tot = 0;

	printf("원금 입력 : ");
	scanf_s("%d", &money);
	printf("기간 입력 : ");
	scanf_s("%d", &year);
	printf("이율 입력 : ");
	scanf_s("%lf", &rate);

	printf("\n원금 %d 원의 %d 년 이율 %.3lf %%\n", money, year, rate);	// 원금 / 기간 / 이율
	shortmoney(money, rate, year);										// 단리시 총금액 함수호출
	printf("\n");
	printf("\n원금 %d 원의 %d 년 이율 %.3lf %%\n", money, year, rate);
	longmoney(money, rate, year);										// 복리시 총금액 함수호출
	printf("\n");
}

double shortmoney(double a, double b, double c)					// 단리시 총금액 함수정의
{
	double tot = a * (1 + b * c);
	
	printf("단리시 총액 : %.3lf", tot);
}

double longmoney(double a, double b, double c)					// 복리시 총금액 함수정의
{
	double tot = a * pow((1 + b), c);

	printf("복리시 총액 : %.3lf", tot);
}