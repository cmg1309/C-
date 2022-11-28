//file: shorteval.c

#include<stdio.h>

int main(void)
{
	int a = 10, b = 5, m = 1;
	int result = 0;
	                                              // &&는 and연산자 피연산자가 모두 참(1) 이어야 참(1) 하나라도 거짓이면 거짓(0)
	result = (a < b) && (m++ == 1);               // (10 < 5) && (1 == 1) -> 첫번째가 거짓이기 떄문에 거짓(0)
	printf("m=%d result=%d\n", m, result);        // m=1, result = 0(거짓) -> m이 1인 이유는 &&연산에서 첫번째가 거짓이면 무조건 거짓이 되기 때문에 두번째부터는 계산을 하지 않음
	                                              // ||는 or연산자 피연산자 중 하나만 참(1)이면 참(1)
	result = (a > b) || (--m == 0);               // (10 > 5) || (--m == 0) -> 첫번째가 참이기 때문에 참(1)
	printf("m=%d result=%d\n", m, result);        // m = 1, result = 1(참) -> m이 1인 이유는 첫번째가 참이기 때문에 두번째는 계산을 하지 않아서 --m의 계산이 진행되지 않음

	return 0;
}