#include<stdio.h>
#include<math.h>

int main(void)
{
	int money = 1000000, year = 0;
	double rate = 0.045, total = 0;

	printf("��ġ �Ⱓ �Է� : ");
	scanf_s("%d", &year);

	total = money * pow((1 + rate), year);                    // pow �Լ��� �̷��� ����ϴ°����� �𸣰����� total ���� (1+rate)�� year��ŭ �����ؾߵǼ� �����
	printf("����� �� ���ɾ� : %lf\n ", total);

	return 0;
}