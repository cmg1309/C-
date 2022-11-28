// 6-16
#include<stdio.h>
#include<stdlib.h>		// rand�Լ�
#include<time.h>		// time�Լ�

#define max 45			// 1~45���� ����

int number(int n);		// ��°� �Լ�����

int main(void)
{
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;

	srand(time(NULL));		// �ð��� ���� ������ ���

	n1 = number(max);		// ��°� �Լ�ȣ��

	do
	{
		n2 = number(max);		// n2���� ��°� �Լ��� ���� 
	} while (n2 == n1);			// n1�� ���ٸ� �ٽ� ����

	do
	{
		n3 = number(max);
	} while (n3 == n1 || n3 == n2);		// n1�� ���ų� n2�� ������ �ٽ� ����

	do
	{
		n4 = number(max);
	} while (n4 == n1 || n4 == n2 || n4 == n3);

	do
	{
		n5 = number(max);
	} while (n5 == n1 || n5 == n2 || n5 == n3 || n5 == n4);

	do
	{
		n6 = number(max);
	} while (n6 == n1 || n6 == n2 || n6 == n3 || n6 == n4 || n6 == n5);

	printf("�ζ� ��÷ ��ȣ : %d, %d, %d, %d, %d, %d", n1, n2, n3, n4, n5, n6);

}

int number(int n)
{
	return rand() % n + 1;		
}