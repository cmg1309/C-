// �ǽ����� 7-3
//#include<stdio.h>
//
//#define ROWSIZE 2
//#define COLSIZE 3
//
//int main(void)
//{
//	int i = 0, j = 0;
//	int sum = 0;
//
//	int td[ROWSIZE][COLSIZE] = { 0 };
//
//	printf("6���� ������ �Է� : ");
//	for (i = 0; i < ROWSIZE; i++)
//	{
//		for (j = 0; j < COLSIZE; j++)
//			scanf_s("%d", &td[i][j]);
//	}
//
//	for (i = 0; i < ROWSIZE; i++)
//	{
//		for (j = 0; j < COLSIZE; j++)
//			sum += td[i][j];
//	}
//	printf("�� : %d, ��� : %lf\n", sum, (double)sum / (double)(ROWSIZE * COLSIZE));
//
//	printf("�ݺ��� for�� �̿��Ͽ� ���\n");
//	for (i = 0; i < ROWSIZE; i++)
//	{
//		for (j = 0; j < COLSIZE; j++)
//			printf("%d ", td[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

// �ǽ����� 7-3 Ȯ�幮��
//#include<stdio.h>
//
//int tot(int data[2][3], int ROWSIZE, int COLSIZE);
//void output(int data[2][3], int ROWSIZE, int COLSIZE);
//void input(int data[2][3], int ROWSIZE, int COLSIZE);
//
//int main(void)
//{
//	int i = 0, j = 0, sum = 0, ROWSIZE = 0, COLSIZE = 0;
//
//	int data[2][3] = { 0 };
//	printf("6���� ������ �Է� : ");
//	ROWSIZE = sizeof(data) / sizeof(data[0]);
//	COLSIZE = sizeof(data[0]) / sizeof(data[0][0]);
//
//	input(data, ROWSIZE, COLSIZE);
//	sum = tot(data, ROWSIZE, COLSIZE);
//	printf("��: %d, ���: %f\n", sum, (double)sum / ((double)ROWSIZE * COLSIZE));
//	printf("�ݺ��� for�� �̿��Ͽ� ���\n");
//	output(data, ROWSIZE, COLSIZE);
//
//	return 0;
//}
//
//void input(int data[2][3], int ROWSIZE, int COLSIZE)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < ROWSIZE; i++)
//		for (j = 0; j < COLSIZE; j++)
//			scanf_s("%d", &data[i][j]);
//}
//
//void output(int data[2][3], int ROWSIZE, int COLSIZE)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < ROWSIZE; i++)
//	{
//		for (j = 0; j < COLSIZE; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		puts("");
//	}
//}
//
//int tot(int data[2][3], int ROWSIZE, int COLSIZE)
//{
//	int i = 0, j = 0;
//	int sum = 0;
//	for (i = 0; i < ROWSIZE; i++)
//		for (j = 0; j < COLSIZE; j++)
//			sum += data[i][j];
//	return sum;
//}

// �ǽ����� 7-5
//#include<stdio.h>                
//
//#define ROWSIZE 4
//#define COLSIZE 2
//
//void input(int score[ROWSIZE][COLSIZE]);
//void output(int score[ROWSIZE][COLSIZE], int sum, int midsum, int finalsum);
//
//int main(void)
//{
//	int i = 0, j = 0, sum = 0, midsum = 0, finalsum = 0;
//
//	int score[ROWSIZE][COLSIZE] = { 0 };
//
//	printf("�߰�, �⸻ ������ �Է��ϼ���: ");
//	for (i = 0; i < ROWSIZE; i++)
//		for (j = 0; j < COLSIZE; j++)
//			scanf_s("%d", &score[i][j]);
//	input(score);
//
//	printf("       �߰�       �⸻     \n");
//	printf("---------------------------\n");
//	for (i = 0; i < ROWSIZE; i++)
//	{
//		for (j = 0; j < COLSIZE; j++)
//		{
//			printf("%10d", score[i][j]);
//			sum += score[i][j];
//			if (j == 0) midsum += score[i][j];
//			else finalsum += score[i][j];
//		}
//		puts("");
//	}
//
//	printf("---------------------------\n");
//	printf("\n���: %7.2f %7.2f\n", (double)midsum / ROWSIZE, (double)finalsum / ROWSIZE);
//	printf("������ ���� %d�̰� ����� %.2f�̴�\n", sum, (double)sum / (ROWSIZE * COLSIZE));
//	output(score, sum, midsum, finalsum);
//
//	return 0;
//}
//
//void input(int score[ROWSIZE][COLSIZE])
//{
//	int i = 0, j = 0;
//	printf("�߰�, �⸻ ������ �Է��ϼ���: ");
//	for (i = 0; i < ROWSIZE; i++)
//		for (j = 0; j < COLSIZE; j++)
//			scanf_s("%d", &score[i][j]);
//}
//
//void output(int score[ROWSIZE][COLSIZE], int sum, int midsum, int finalsum)
//{
//	printf("---------------------------\n");
//	printf("\n���: %7.2f %7.2f\n", (double)midsum / ROWSIZE, (double)finalsum / ROWSIZE);
//	printf("������ ���� %d�̰� ����� %.2f�̴�\n", sum, (double)sum / (ROWSIZE * COLSIZE));
//}

// �ǽ����� 7-6
//#include<stdio.h>
//
//#define ARYSIZE 5
//double sum(double ary[], int n);
//void input(double data[]);
//
//int main(void)
//{
//	int i = 0, total = 0;
//
//	double data[ARYSIZE] = { 0 };
//
//	/*printf("5���� ������ �Է� :");
//	for (i = 0; i < ARYSIZE; i++)
//		scanf_s("%lf", &data[i]);
//	puts("");*/
//	input(data);
//
//	for (i = 0; i < ARYSIZE; i++)
//		printf("%5.1f", data[i]);
//	puts("");
//		
//	printf("�� : %lf", sum(data, ARYSIZE));
//}
//
//double sum(double ary[], int n)
//{
//	int i = 0;
//	double total = 0;
//
//	for (i = 0; i < n; i++)
//		total += ary[i];
//
//	return total;
//}
//
//void input(double data[])
//{
//	int i = 0;
//
//	printf("5���� ������ �Է� :");
//	for (i = 0; i < ARYSIZE; i++)
//		scanf_s("%lf", &data[i]);
//	puts("");
//}

// �ǽ����� 7-8
#include<stdio.h>

double readary(double data[], int n);
double sum(double data[], int n);
void printary(double data[], int n);

int main(void)
{
	int i = 0;
	double data[5] = { 0 };

	int arysize = sizeof(data) / sizeof(data[0]);

	printf("�Ǽ� 5���� ���� �Է��ϼ���.\n");
	readary(data, arysize);
	printf("\n�Է��� �ڷ� ���� ������ �����ϴ�.\n");
	printary(data, arysize);
	printf("\n�Լ����� ���� ���� %.3lf�Դϴ�.\n", sum(data, arysize));

	return 0;
}

double readary(double data[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("data[%d] = ", i);
		scanf_s("%lf", &data[i]);
	}
	return 0;
}

double sum(double data[], int n)
{
	int i = 0;
	double tot = 0;
	for (i = 0; i < n; i++)
		tot += data[i];
	return tot;
}

void printary(double data[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
		printf("data[%d] = %.2lf  ", i, data[i]);
}