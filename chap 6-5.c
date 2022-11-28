// 6-5
#include<stdio.h>

int square(int n);							// 제곱 구하는 함수원형
int cube(int n);							// 세제곱 구하는 함수원형

int main(void)
{
	int n = 0, result = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	result = square(n) * cube(n);			// 다섯제곱 구하는 함수호출
	printf("다섯제곱한 값 : %d", result);
}

int square(int n)							// 제곱 구하는 함수정의
{
	int result = n * n;

	return result;							// 리턴값으로 n * n 을 해줌
}

int cube(int n)								// 세제곱근을 구하는 함수정의
{
	int result = n * n * n;

	return result;							// 리턴값으로 n * n * n 을 해줌
}