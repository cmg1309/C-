// 6-9
#include<stdio.h>
#include<math.h>

double shortmoney(double a, double b, double c);		// �ܸ� ��� �Լ�����
double longmoney(double a, double b, double c);			// ���� ��� �Լ�����

int main(void)
{
	int year = 0, money = 0;
	double rate = 0, tot = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &money);
	printf("�Ⱓ �Է� : ");
	scanf_s("%d", &year);
	printf("���� �Է� : ");
	scanf_s("%lf", &rate);

	printf("\n���� %d ���� %d �� ���� %.3lf %%\n", money, year, rate);	// ���� / �Ⱓ / ����
	shortmoney(money, rate, year);										// �ܸ��� �ѱݾ� �Լ�ȣ��
	printf("\n");
	printf("\n���� %d ���� %d �� ���� %.3lf %%\n", money, year, rate);
	longmoney(money, rate, year);										// ������ �ѱݾ� �Լ�ȣ��
	printf("\n");
}

double shortmoney(double a, double b, double c)					// �ܸ��� �ѱݾ� �Լ�����
{
	double tot = a * (1 + b * c);
	
	printf("�ܸ��� �Ѿ� : %.3lf", tot);
}

double longmoney(double a, double b, double c)					// ������ �ѱݾ� �Լ�����
{
	double tot = a * pow((1 + b), c);

	printf("������ �Ѿ� : %.3lf", tot);
}