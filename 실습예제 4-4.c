//file: increment.c

#include<stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result = 0;

	result = m++ + --n;                                // m++ = 10, --n = 4 -> ++�� �����̱� ������ ���߿� �������, --�� �����̱� ������ �̸� �������
	printf("m=%d n=%d result=%d\n", m, n, result);     // m = 11, n = 4, m++ + --n = 14

	result = ++m - n--;                                // ++m = 11, n-- = 5 -> ++�� �����̱� ������ �̸� �������, --�� �����̱� ������ ���߿� �������
	printf("m=%d n=%d result=%d\n", m, n, result);     // m = 12, n = 4, ++m - n-- = 8 -> m�� 12�� ������ ������ m�� ���� 11�� ������Ʈ �Ǿ��� ������
	
	return 0;
}