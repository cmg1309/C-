// 5-8
#include<stdio.h>

int main(void)
{
	int n = 0, m = 0;							// n�� �Է°�, m�� ��°�

	printf("�ݴ�� ����� ������ �Է� : ");
	scanf_s("%d", &n);
	printf("\n�Էµ� ������ �ݴ�� ��� : ");

	do
	{
		m = n % 10;								// m(��°�)�� n�� 10���� ���� ������
		printf("%d", m);
		n = n / 10;								// n(�Է°�)�� n�� 10�� ���� ��
	} while (n);
	printf("\n");
}