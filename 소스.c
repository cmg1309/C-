//#include<stdio.h>
//
//int ctof(int c); //�Լ�����
//
//int main(void)
//{
//	int c = 0;
//	
//	for (c = 0; c <= 200; c++)
//		printf("�𾾿µ� : %3d = ȭ���µ� : %3d\n", c, ctof(c)); //�Լ�ȣ��
//
//	return 0;
//}
//
//int ctof(int c)
//{
//	return (int)(9.0 / 5.0)* c + 32;
//}

//#include<stdio.h>
//#define PI 3.14
//
//double area(double r);
//double cir(double r);
//
//int main(void)
//{
//	double r = 0;
//
//	printf("���� ������ �Է�:");
//	scanf_s("%lf", &r);
//	printf("�������� %f�� ���� ����: %.3f", r, area(r));
//	printf("\n�������� %f�� ���� �ѷ�: %.3f", r, cir(r));
//
//	return 0;
//}
//
//double area(double r)
//{
//	return (double)(PI * r * r);
//}
//
//double cir(double r)
//{
//	return (double)(2 * PI * r);
//}

// �ǽ����� 6-2 Ȯ��
//#include<stdio.h>
//
//int add2(int a, int b);
//int findmax2(int a, int b);
//int findmin(int n, int m);
//void printmin(int a, int b);
//
//int main(void)
//{
//	int a = 0, b = 0, max = 0, sum = 0;
//
//	printf("�� ���� �Է�:");
//	scanf_s("%d%d", &a, &b);
//
//	sum = add2(a, b);
//	max = findmax2(a, b);
//
//	printf("�ִ� : %d\n", max);
//	printf("�� : %d\n", sum);
//	printmin(a, b);
//	puts("");
//
//	return 0;
//}
//
//int add2(int a, int b)
//{
//	int sum = a + b;
//
//	return sum;
//}
//
//int findmax2(int a, int b)
//{
//	int max = a > b ? a : b;
//	
//	return max;
//}
//
//int findmin(int n, int m)
//{
//	int min = n > m ? m : n;
//
//	return min;
//}
//
//void printmin(int a, int b)
//{
//	int min = findmin(a, b);
//	printf("�ּ� : %d\n", min);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define MAX 100
//
//int main(void)
//{
//	int i = 0, number = 0;
//
//	srand((int)time(NULL));
//	printf("0 ~ %5d ������ ���� 5�� : rand()\n", MAX);
//	for (i = 0; i < 5; i++)
//	{
//		number = rand() % MAX + 1;
//		printf("%5d ", number);
//	}
//	puts("");
//
//	return 0;
//}

// /*���α׷��� ���� 1��*/
//#include<stdio.h>
//
//double inchtocenti(double x);                                // �Լ����� double ��������
//
//int main(void)
//{
//	double x = 0, n = 0;
//
//	printf("�Ÿ��� ��ġ�� �Է��ϼ���. -> ");
//	scanf_s("%lf", &x);
//	
//	n = inchtocenti(x);                                      // n ��� inchtocenti(x) �� ������ ����
//	printf("\n�Է��� %lf��ġ�� %lf��ġ�����̴�.\n", x, n);   // n ��� inchtocenti(x) �� �־ ����
//
//	return 0;
//}
//
//double inchtocenti(double x)                                 // �Լ�����, Ÿ���� double
//{
//	return (double) x * 2.54;                                // ���ϰ��� x * 2.54, Ÿ���� double
//}

// ���α׷��� ���� 2��
#include<stdio.h>

int intpow(int m, int n);                                           // �Լ�����, intpow(m, n) -> int�� ��������

int main(void)
{
	int n = 0, m = 0;

	printf("���� m�� n�� �����մϴ�.\n");
	printf("\n���� m�Է� -> ");
	scanf_s("%d", &m);
	printf("���� n�Է� -> ");
	scanf_s("%d", &n);

	printf("\n%d�� %d ������ %d �Դϴ�.", m, n, intpow(m, n));      // intpow() �Լ�ȣ��

	return 0;
}

int intpow(int m, int n)                                            // �Լ� ����, Ÿ���� int
{
	int i = 1, result = 1;

	for (i = 1; i <= n; i++)
	{
		result = result * m;
	}
	return result;                                                  // ���ϰ����� result�� ����
}