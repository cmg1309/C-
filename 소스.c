// �ǽ����� 6-3
//#include<stdio.h>
//
//int factorial(int number);                         // �Լ� ����
//
//int main(void)
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//
//		printf("%d! = %d\n", i, factorial(i));       // �Լ� ȣ��
//
//	return 0;
//}
//
//int factorial(int number)                          // �Լ� ����
//{
//	if (number <= 1)                                 // number�� 1�� ���ų� ������ 1 �� ���
//		return 1;
//	else                                             
//		return (number * factorial(number - 1));     // �ƴϸ� ������ ���
//}

// �ǽ����� 6-6
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define max 100                                                    // �ִ밪 100
//
//int main(void)
//{
//	int n = 0, m = 0;
//
//	srand((long)time(NULL));                                         // �� �������� �������� ��������
//	n = rand() % max + 1;                                           
//
//	printf("1���� %d ���̿��� �� ���� �����Ǿ����ϴ�.\n", max);
//	printf("�� ������ �����ϱ��? �Է��� ������. : ");
//
//	while (scanf_s("%d", &m))                                        // ���� �Է�
//	{
//		if (m > n)                                                   // �Է��� ���� �Էµ� �������� ������ ���
//			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : ");
//		else if (m < n)                                              // �Է��� ���� �Էµ� �������� ũ�� ���
//			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���. : ");
//		else                                                         // �Է��� ���� �Էµ� ������ ������ puts() ����ϰ� �ݺ� ����
//		{
//			puts("�����Դϴ�.");
//			break;
//		}
//	}
//	return 0;
//}

// �ǽ����� 6-7

//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	int i = 0;
//
//	printf("  i   i����   i������   ������(sqrt)\n");
//	printf("------------------------------------\n");
//	for (i = 3; i < 7; i++)
//		printf("%3d %7.1f %9.1f %9.1f\n", i, pow(i, 2), pow(i, 3), sqrt(i));   // pow(,2)�� ����, pow(,3)�� ������, sqrt()�� ������
//	printf("\n");
//
//	printf("exp(1,0) == %5.2f, ", exp(1, 0));                                  
//	printf("pow(2.72, 1.0) == %5.2f, ", pow(2.72, 1.0));                       // ����ǥ�� 2.72�� 1���� = 2.72
//	printf("sqrt(49) == %5.2f\n", sqrt(49));                                   // ������ ǥ�� 49 -> 7*7 -> 7
//	printf("abs(-10) == %3d, ", abs(-10));                                     // ���밪�� ǥ�� -10 -> 10
//	printf("ceil(7.1) == %5.2f, ", ceil(7.1));                                 // �Ҽ��� ���� ��� �ø� 7.1 -> 8.0
//	printf("floor(6.9) == %5.2f\n", floor(6.9));                               // �Ҽ��� ���� ��� ���� 6.9 -> 6.0
//
//	return 0;
//}

// �ǽ����� 6-8

//#include<stdio.h>
//#include<ctype.h>
//
//void print2char(char);                                         // �Լ� ����
//
//int main(void)
//{
//	char ch = 0;
//
//	printf("���ĺ�(����x) �Ǵ� �ٸ� ���ڸ� �Է��ϼ���. \n");
//	
//	do
//	{
//		printf("���� �Է� �� Enter: ");
//		scanf_s("%c", &ch);
//		getchar();                                              // enterŰ�� �ޱ� ���� ���
//		if (isalpha(ch))
//			print2char(ch);                                     // �Լ� ȣ��
//		else
//			printf("�Է�: %c\n", ch);
//	} while (ch != 'x');
//
//	return 0;
//}
//
//void print2char(char ch)                                         // �Լ� ����
//{
//	if (isupper(ch))                                             // �Է¹��� ���� �빮���̸� ��
//		printf("�Է�: %c, ��ȯ: %c\n", ch, tolower(ch));         // tolower �Է¹��� �빮�ڸ� �ҹ��ڷ�
//	else
//		printf("�Է�: %c, ��ȯ: %c\n", ch, toupper(ch));         // toupper �Է¹��� �ҹ��ڸ� �빮�ڷ�
//
//	return 0;
//}

// ������� ��� ���α׷�

#include<stdio.h>

int time_pass(int n1, int n2, int m1, int m2);                     // �Լ� ����
int charge(int time);

int main(void)
{
	int starth = 0, startm = 0, endh = 0, endm = 0;
	int th = 0, tm = 0, minutes = 0;

	printf("���� ��� ��� program\n");
	printf("\n�����ð� �Է�(�ð� ��) : ");
	scanf_s("%d %d", &starth, &startm);
	printf("�����ð� �Է�(�ð� ��) : ");
	scanf_s("%d %d", &endh, &endm);

	minutes = time_pass(starth, startm, endh, endm);
	th = minutes / 60;                                              // ������ �ð� / 60 = ������ �ð�(h)
	tm = minutes % 60;                                              // ������ �ð� % 60 = ������ ��(m)

	printf("\n");
	printf("�����ð� : %d�ð� %d��(�� %d��)\n", th, tm, minutes);
	printf("������� : %d��\n", charge(minutes));                   // �Լ� ȣ��

	return 0;
}

int time_pass(int n1, int n2, int m1, int m2)                       // m1�� �����ð� n1�� �����ð�, m2�� ������ n2�� ������
{
	return (int)(m1 - n1) * 60 + (m2 - n2);
}

int charge(int time)                                                // �����ð����� �����ð��� �� ���� ��
{
	int fare;
	if (time % 10 > 0)                                              // �� ���� 10���� ������ else�� �Ѿ ex) �����ϰ� ������ ���� �ð��� 1~9���� ���
		fare = (time / 10 + 1) * 1000;                              
	else
		fare = (time / 10) * 1000;
	return fare;
}