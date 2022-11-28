//file: increment.c

#include<stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result = 0;

	result = m++ + --n;                                // m++ = 10, --n = 4 -> ++이 후위이기 때문에 나중에 계산해줌, --이 전위이기 때문에 미리 계산해줌
	printf("m=%d n=%d result=%d\n", m, n, result);     // m = 11, n = 4, m++ + --n = 14

	result = ++m - n--;                                // ++m = 11, n-- = 5 -> ++이 전위이기 때문에 미리 계산해줌, --이 후위이기 때문에 나중에 계산해줌
	printf("m=%d n=%d result=%d\n", m, n, result);     // m = 12, n = 4, ++m - n-- = 8 -> m이 12인 이유는 위에서 m의 값이 11로 업데이트 되었기 때문에
	
	return 0;
}