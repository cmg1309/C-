//file: condition.c

#include<stdio.h>

int main(void)
{
	int a = 10, b = -5;
	                                                           // x ? a : b -> x가 0과 같지 않으면 참(1) -> a, x가 0이면 거짓(0) -> b
	printf("최대값: %d\n", (a > b) ? a : b);                   // (10 > -5) = 참 -> a를 고름 = 10
	printf("최소값: %d\n", (a < b) ? a : b);                   // (10 < -5) = 거짓 -> b를 고름 = -5
	printf("절대값: %d\n", (a > b) ? a : -a);                  // (10 > -5) = 참 -> a를 고름 = 10
	printf("절대값: %d\n", (b > 0) ? b : -b);                  // (-5 > 0) = 거짓 -> -b를 고름 =-(-5) = 5
	                                                           // != -> 부정(같지 않다), == -> ~와 같다
	((a % 2) == 0) ? printf("짝수\n") : printf("홀수\n");      // (10 % 2) = 0 -> 참, 짝수를 고름

	return 0;
}