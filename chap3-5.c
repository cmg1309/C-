#include<stdio.h>

#define PI 3.141592                                // ��ũ�� ��� ���, �������� ��ü��

int main(void)
{
	double r = 0;                                  // �Է� ���� �ű� ������ 0

	printf("���� ������ �Է�:");
	scanf_s("%lf", &r);                            // double �� ����ؼ� lf ���
	printf("���� ����: %f\n", r * r * PI);
	printf("���� �ѷ�: %f\n", 2 * r * PI);

	return 0;
}
