#include<stdio.h>

int main(void)
{
	int money = 1000000, year = 0;               // �⵵�� ������ int
	double rate = 0.045, total = 0;              // �������� �� �ݾ��� ������� �Ǽ� ���·� ���ͼ� double

	printf("��ġ �Ⱓ �Է� :");           
	scanf_s("%d", &year);

	total = money * (1 + rate * year);              
	printf("����� �� ���ɾ�: %lf\n", total);    // double ����ؼ� lf ���

	return 0;
}