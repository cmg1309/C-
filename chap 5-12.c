// 5-12
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i = 0, money = 1000000;										// ���� 100����
	double rate = 0.045, total = 0;									// ���� 0.045

	for (i = 0; i < 10; i++)										// 1����� 10�����
	{
		total = money * pow((1 + rate), i);							// �⸶�� ����� �� ���ɾ�
		printf("%d�� ����� �� ���ɾ� : %.2f\n", i + 1, total);		// 1����� �����̶� i+1
	}
}