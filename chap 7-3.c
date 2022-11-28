// 7-3
#include<stdio.h>

double sum(double nums[5]);		// 총합을 구하는 함수원형
double avg(double nums[5]);		// 평균을 구하는 함수원형

int main(void)
{
	int i = 0;
	double nums[5] = { 98.56, 78.62, 78.69, 89.32, 95.29 };		// 일차원 배열 초기화값
	
	printf("배열내 값 : ");
	for (i = 0; i < 5; i++)						// 0열부터 4열까지 초기값 출력
	{
		printf("%.2f ", nums[i]);
	}
	printf("\n총합 : %.2lf ", sum(nums));		// 총합을 구하는 함수호출
	printf("평균 : %.2lf\n", avg(nums));		// 평균을 구하는 함수호출
}

double sum(double nums[5])		// 총합을 구하는 함수정의
{
	int i = 0;
	double sum = 0;
	for (i = 0; i < 5; i++)		// 0열부터 4열까지의 합을 구함
	{
		sum += nums[i];			
	}
	return sum;					// sum(총합)을 리턴받음
}
double avg(double nums[5])		// 평균을 구하는 함수정의
{
	int i = 0;
	double avg = 0;
	for (i = 0; i < 5; i++)		// 0열부터 4열까지 총합의 평균을 구함
	{
		avg = sum(nums) / 5.0;
	}
	return avg;					// avg(평균)을 리턴받음
}