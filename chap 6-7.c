// 6-7
#include<stdio.h>
#include<math.h>								// sqrt(������) ���ϴ� �Լ� ���� ���

double nums(double a, double b);				// c���� ���ϴ� �Լ�����

int main(void)
{
	double a = 0, b = 0, c = 0;

	printf("�� ���� ���� a, b�� �Է�: ");
	scanf_s("%lf %lf", &a, &b);
	c = nums(a, b);								// c���� ���ϴ� �Լ�ȣ��
	printf("c�� ���̴� : %.2lf\n", c);
}

double nums(double a, double b)					// c���� ���ϴ� �Լ�����
{
	return sqrt(a * a + b * b);					// �������� �̿��� ���ϰ� ���� 
}