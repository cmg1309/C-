#include<stdio.h>

int main(void)
{
	double F = 0;                                          

	printf("ȭ���µ� �Է�:");
	scanf_s("%lf", &F); 
	printf("�����µ��� : %.4lf\n", 5.0 / 9.0 * (F - 32.0));       // %.4f �� .4�� �Ҽ��� 4�ڸ�

	return 0;
}