#include<stdio.h>

#define PI 0.621371                  // ������ ��ü����

int main(void)
{
	int L = 0;

	printf("���̸� �Է�:");
	scanf_s("%d", &L);
	printf("���� : %f", L * PI);      // ����� �Ǽ����·� ��

	return 0;
}