// 7-3
#include<stdio.h>

double sum(double nums[5]);		// ������ ���ϴ� �Լ�����
double avg(double nums[5]);		// ����� ���ϴ� �Լ�����

int main(void)
{
	int i = 0;
	double nums[5] = { 98.56, 78.62, 78.69, 89.32, 95.29 };		// ������ �迭 �ʱ�ȭ��
	
	printf("�迭�� �� : ");
	for (i = 0; i < 5; i++)						// 0������ 4������ �ʱⰪ ���
	{
		printf("%.2f ", nums[i]);
	}
	printf("\n���� : %.2lf ", sum(nums));		// ������ ���ϴ� �Լ�ȣ��
	printf("��� : %.2lf\n", avg(nums));		// ����� ���ϴ� �Լ�ȣ��
}

double sum(double nums[5])		// ������ ���ϴ� �Լ�����
{
	int i = 0;
	double sum = 0;
	for (i = 0; i < 5; i++)		// 0������ 4�������� ���� ����
	{
		sum += nums[i];			
	}
	return sum;					// sum(����)�� ���Ϲ���
}
double avg(double nums[5])		// ����� ���ϴ� �Լ�����
{
	int i = 0;
	double avg = 0;
	for (i = 0; i < 5; i++)		// 0������ 4������ ������ ����� ����
	{
		avg = sum(nums) / 5.0;
	}
	return avg;					// avg(���)�� ���Ϲ���
}