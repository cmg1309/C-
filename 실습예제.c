////5-12
//
//#include<stdio.h>
//
//int main(void)
//{
//	int n = 0, m = 0, i = 0;
//
//	for (; ;)
//	{
//		printf("1���� 20������ ���� �Ǵ� ����(0) �Է�:");
//		scanf_s("%d", &n);
//		if (n <= 0)                                        // n�� 0�̰ų� ������ �ٷ� ����
//			break;
//		for (i = 1, m = 1; i <= n; i++)                    // �ʱⰪ i=1, m=1, i�� n�� �ݺ�, �ݺ��� i�� 1�� ����
//			m = m * i;
//		printf("1���� %d���� ��: %d\n", n, m);
//	}
//	puts("�����մϴ�.");
//
//	return 0;
//}

//5-13(�⺻)

//#include<stdio.h>
//
//int main(void)
//{
//	const int max = 15;                                                        // �������ʴ� ���� max�� 15
//	int i = 0;
//
//	printf("1���� %d���� �����߿��� 3���� ������ �������� �ʴ� ��\n", max);
//	for (i = 1; i <= max; i++)                                                 // �ʱⰪ 1, i�� max���� �ݺ�, �ݺ��� i�� 1�� ����
//	{
//		if (i % 3 == 0)                                                        // i % 3 �� 0�� ������ continue(max�ݺ�) �ƴϸ� printf�� ���
//			continue;
//		printf("%3d", i);
//	}
//	puts("");
//
//	return 0;
//}

//5-13(if��)

//#include<stdio.h>
//
//int main(void)
//{
//	const int max = 15;
//	int i = 0;
//
//	printf("1���� %d���� �����߿��� 3���� ������ �������� �ʴ� ��\n", max);
//	for (i = 0; i <= max; i++)
//	{
//		if (i % 3 != 0)                                                          // i % 3 �� 0�� ���� �ʴٸ� printf �� ���
//		{
//			printf("%3d", i);
//		}
//	}
//	puts("");
//
//	return 0;
//}

//5-14

//#include<stdio.h>
//
//int main(void)
//{
//	int c = 0;
//
//loop:
//	printf("%3d", c);
//	if (++c <= 10) goto loop;                  // c�� 10�� �ɶ����� �ݺ� loop�� ���ư�
//
//	printf("\n���α׷��� �����մϴ�.\n");
//
//	return 0;
//}

//5-15
//
//#include<stdio.h>
//
//int main(void)
//{
//	int m = 0, n = 0;
//
//	for (m = 1; m <= 5; m++)                // �ʱⰪ 1, 5�� �ݺ�, �ݺ��� 1�� ����
//	{
//		printf("m = %-2d\n", m);            // - �� ���� ����
//		for (n = 1; n <= 7; n++)            // �ʱⰪ 1, 7�� �ݺ�, �ݺ��� 1�� ����
//			printf("n = %-2d", n);          // ��������
//		puts("");
//	}
//
//	return 0;
//}

//5-16

//#include<stdio.h>
//
//int main(void)
//{
//	const int max = 6;
//	int i = 0, j = 0;
//
//	for (i = 1; i <= max; i++)          // �ʱⰪ 1, max���� �ݺ�, �ݺ��� 1�� ����
//	{
//		for (j = 1; j <= i; j++)        // �ʱⰪ 1, i���� �ݺ�, �ݺ��� 1������
//			printf("*");
//		puts("");                       // ĭ���
//	}
//	return 0;
//}

//5-17

//#include<stdio.h>
//
//int main(void)
//{
//	int n = 0, i = 0, j = 0, sum = 0;
//
//	while (1)
//	{
//		printf("���� ���� �Ǵ� 0(����)�� �Է�:");
//		scanf_s("%d", &n);
//		if (n <= 0)                                         // n�� 0�� ���ų� ������ ����
//			break;
//
//		for (i = 1; i <= n; i++)                            // �ʱⰪ 1, n���� �ݺ�, �ݺ��� 1����
//		{
//			for (j = 1, sum = 0; j <= i; j++)               // �ʱⰪ 1, sum = 0(�ݺ��ɶ����� ���� �ٲ�), i���� �ݺ�, �ݺ��� 1����
//			{
//				printf("%2d", j);
//				j == i ? printf(" =") : printf(" +");       // j�� i�� ���ٸ� = �� ��� �ٸ��� + �� ���
//				sum = sum + j;                              // sum �� sum + j �ݺ� �ɶ�����
//			}
//			printf("%3d\n", sum);
//		}
//	}
//	puts("�����մϴ�.");
//
//	return 0;
//}

//��ø for��

#include<stdio.h>

int main(void)
{
	int i = 0, j = 0;

	for (i = 1; i <= 9; i++)
	{
		for (j = 9; j >= 0; j--)
		{
			if (j >= i)
				printf("%d", j);
			else
				putchar(' ');
		}
		printf("\n");
	}
	return 0;
}