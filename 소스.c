//#include<stdio.h>
//
//int main(void)
//{
//	for (int i = 0; i < 5; i++) 
//	{
//		printf("*****\n");
//	}
// return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int i = 2;
//	for ( ; i <= 10; )
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int i = 1;
//
//	printf(" i ���� ������\n");
//	printf("---------------\n");
//
//	for (i = 1; 1 <= 10; i++)
//	{
//		printf("%2d %4d %7d\n", i, i * 1, i * i * i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int i = 1, sum = 0;
//
//	for (i = 1, sum = 0; i <= 10; ) {
//		sum += i++;
//		printf("1���� 10���� ��: %3d\n", sum);
//	}
//	for (i = 0, sum = 0; i <= 9; ) {
//		sum += ++i;
//		printf("1���� 10���� ��: %3d\n", sum);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	int i = 1, sum = 0, max = 10;
//
//	while (i <= max)
//		sum += i++;
//
//	printf("1���� %d���� ��: %d\n", max, sum);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0;
//
//	for (i = 0; i <= 200; i = i + 20) {
//		
//		printf("�����µ� : %3d = ȭ���µ� : %3d\n", i, (int)((9.0 / 5.0) * i) + 32);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int i = -60;
//
//	for (i = -60; i <= 140; i = i + 20) {
//
//		printf("�����µ� : %3d = ȭ���µ� : %3d\n", i, (int)((9.0 / 5.0) * i) + 32);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int n = 0, i = 1;
//
//	printf("����ϰ���� �� :");
//	scanf_s("%d", &n);
//
//	while (i <= 9) {
//		printf("%d * %d = %d\n", n, i, n * i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int input = 0;
//
//	do 
//	{
//		printf("���� ���� �Ǵ� 0(����)�� �Է�: ");
//		scanf_s("%d", &input);
//
//		if (input > 0)
//		{
//			int sum = 0, i = 0;
//
//			for (i = 1; i <= input; i++)
//				sum = sum + i;
//			printf("1���� %d���� �� : %d\n", input, sum);
//		}
//		else if (input < 0)
//		{
//			int sum = 0, i = 0;
//
//			for (i = -1; i >= input; i--)
//				sum = sum + i;
//			printf("-1���� %d���� �� : %d\n", input, sum);
//		}
//	} while (input = 0);
//
//	puts("�����մϴ�.");
//
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	const double rate = 0.045;
//	double origin = 1000000, total = 0;
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		total = origin * (1 + rate * i);
//		printf("%2d�� �� �ݾ�: %.2f\n", i, total);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	double origin = 0, total = 0, rate = 0;
//	int i = 0, year = 0, op = 0;
//
//	printf("����, ����, �Ⱓ(��)�� �Է�\n");
//	printf("���� : ");
//	scanf_s("%lf", &origin);
//	printf("���� : ");
//	scanf_s("%lf", &rate);
//	printf("�Ⱓ(��) : ");
//	scanf_s("%d", &year);
//
//	printf("\n=======================\n");
//	printf("����       ������\n");
//	printf("=======================\n");
//	
//	total = origin;
//	rate /= 100.0;
//
//	for (i = 0; i < year; i++)
//	{
//		total = total * (1 + rate * i);
//		printf("%2d       %10.1lf\n", i+1, total);
//	}
//
//	printf("=======================\n");
//
//	return 0;
//}


//�ǽ����� 209p 11�� for��


//#include<stdio.h>
//
//int main(void)
//{
//	int origin = 1000000, i = 0;
//	double rate = 0.045, total = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		total = origin * (1 + rate * i);
//		printf("%2d�� �� �ݾ� = %lf\n", i, total);
//	}
//	return 0;
//}


//�ǽ����� 209p 11�� while��

#include<stdio.h>

int main(void)
{
	int origin = 1000000, i = 1;
	double rate = 0.045, total = 0;

	while (i <= 10)
	{
		total = origin * (1 + rate * i);
		printf("%2d�� �� �ݾ� = %lf\n", i, total);
		i++;
	}
	return 0;
}