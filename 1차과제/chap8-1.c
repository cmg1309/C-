//8-1
//#include<stdio.h>
//
//void increment(int* p, int size, int n);
//
//int main(void)
//{
//	int data[7] = { 3,21,35,57,24,82,8 };
//	int size = 7, sum = 0, n = 0, i;
//
//	printf("===== ���� �迭 =====\n");
//	for (i = 0; i < size; i++)
//	{
//		printf(" %d", data[i]);
//	}
//	printf("\n=====================\n");
//	
//	printf("�������� �Է��ϼ���. : ");
//	scanf_s("%d", &n);
//	increment(data, size, n);
//	
//}
//void increment(int* p, int size, int n)		// ������ ��� �Լ�, *p�� data�迭�� ������
//{
//	int i;
//	printf("\n==== ������ �迭 ====\n");
//	for (i = 0; i < size; i++)
//	{
//		p[i] = p[i] + n;		// �Է¹��� n�� ��ŭ �迭�� ���� ����
//		printf(" %d", p[i]);
//	}
//	printf("\n");
//}