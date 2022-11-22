#include<stdio.h>
#include<math.h>

int main(void)
{
	int money = 1000000, year = 0;
	double rate = 0.045, total = 0;

	printf("예치 기간 입력 : ");
	scanf_s("%d", &year);

	total = money * pow((1 + rate), year);                    // pow 함수를 이렇게 사용하는건지는 모르겠지만 total 안의 (1+rate)를 year만큼 제곱해야되서 사용함
	printf("만기시 총 수령액 : %lf\n ", total);

	return 0;
}