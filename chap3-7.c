#include<stdio.h>

int main(void)
{
	double C = 0;

	printf("�����µ� �Է�:");
	scanf_s("%lf", &C);
	printf("�����µ��� : %.4lf\n", (9.0 / 5.0) * C + 32.0);        // %.4f �� .4�� �Ҽ��� 4�ڸ�

	return 0;
}