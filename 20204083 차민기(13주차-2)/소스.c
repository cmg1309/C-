// �������� ���α׷�
//
//#include<stdio.h>
//
//void input(int score[5][2]);										// �Է°� �Լ�����
//int sum(int score[5][2], int tot[2]);								// ������ ���ϴ� �Լ�����
//void output(int score[5][2], int tot[2]);							// ��°� �Լ�����
//
//int main(void)
//{
//	int i = 0, j = 0;
//	int score[5][2] = { 0 };
//	int tot[2] = { 0 };
//
//	//printf("�� �л��� ���� ������ ���� ������ �Է��ϼ���.\n");	// �Է��ϴ� �κ��� for��
//	//for (i = 0; i < 5; i++)
//	//{
//	//	for (j = 0; j < 2; j++)
//	//	{
//	//		if(j==0)
//	//		{
//	//			printf("%d�� �л��� ���� ���� : ", i + 1);			// j(��)�� 0���̸� �Էµ� ��µǴ� �� ������ 1�̱⶧���� i�� +1 �� ����
//	//			scanf_s("%d", &score[i][j]);
//	//		}
//	//		else
//	//		{
//	//			printf("%d�� �л��� ���� ���� : ", i + 1);			// j(��)�� 0���� �ƴϸ� �Էµ�
//	//			scanf_s("%d", &score[i][j]);
//	//		}
//	//	}
//	//}
//	input(score);													// �Է°� �Լ�ȣ��
//
//	//for (i = 0; i < 5; i++)										// ������ ���ϴ� �κ��� for��
//	//{
//	//	for (j = 0; j < 2; j++)
//	//	{
//	//		if (j == 0)												// j(��)�� 0���̸� 0���� �Էµ� �� ���� ����
//	//		{
//	//			tot[j] = tot[j] + score[i][j];
//	//		}
//	//		else													// j(��)�� 0���� �ƴϸ� 1���� �Էµ� �� ���� ����
//	//		{
//	//			tot[j] = tot[j] + score[i][j];
//	//		}
//	//	}
//	//}
//	sum(score, tot);												// ������ ���ϴ� �Լ�ȣ��
//
//	//printf("==============================\n");
//	//printf("�л���ȣ   ��������   ��������\n");
//	//printf("==============================\n");
//
//	//for (i = 0; i < 5; i++)										// ��°� ���ϴ� �κ��� for��
//	//{
//	//	printf("   %d", i + 1);
//	//	for (j = 0; j < 2; j++)
//	//	{
//	//		printf("%12d", score[i][j]);							// 5�� 2���� �°� �Էµ� ���� �������
//	//	}
//	//	puts("");
//	//}
//
//	//printf("==============================\n");
//	//printf("���� %11d %11d\n", tot[0], tot[1]);					// 0���� 1���� �Էµ� ���� ���� ���� ���� ����
//	//printf("��� %11.2lf %11.2lf\n", tot[0] / 5.0, tot[1] / 5.0);	// 0���� 1���� �Էµ� ���� ���� ���� ����� ����
//	output(score, tot);												// ��°� �Լ�ȣ��
//
//	return 0;
//}
//
//void input(int score[5][2])											// �Է°� �Լ�����
//{
//	int i = 0, j = 0;
//	printf("�� �л��� ���� ������ ���� ������ �Է��ϼ���.\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			if (j == 0)
//			{
//				printf("%d�� �л��� ���� ���� : ", i + 1);
//				scanf_s("%d", &score[i][j]);
//			}
//			else
//			{
//				printf("%d�� �л��� ���� ���� : ", i + 1);
//				scanf_s("%d", &score[i][j]);
//			}
//		}
//	}
//}
//
//int sum(int score[5][2], int tot[2])								// ������ ���ϴ� �Լ�����
//{
//	int i = 0, j = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			if (j == 0)
//			{
//				tot[j] = tot[j] + score[i][j];
//			}
//			else
//			{
//				tot[j] = tot[j] + score[i][j];
//			}
//		}
//	}
//}
//
//void output(int score[5][2], int tot[2])							// ��°��� ���ϴ� �Լ�����
//{
//	int i = 0, j = 0;
//	printf("==============================\n");
//	printf("�л���ȣ   ��������   ��������\n");
//	printf("==============================\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("   %d", i + 1);
//		for (j = 0; j < 2; j++)
//		{
//			printf("%12d", score[i][j]);
//		}
//		puts("");
//	}
//
//	printf("==============================\n");
//	printf("���� %11d %11d\n", tot[0], tot[1]);
//	printf("��� %11.2lf %11.2lf\n", tot[0] / 5.0, tot[1] / 5.0);
//}

// ���� �Է��Ͽ� �ִ� �ּ� ���ϱ�

//#include<stdio.h>
//#include<stdlib.h>
//
//void output(int score[10][3]);							// ��°� �Լ�����
//
//int main(void)
//{
//	int i = 0, j = 0;
//	int max = 0, min = 0, sum = 0;
//	int score[10][3] = { 0 };							// 10�� 3�� �迭
//
//	printf("�й�   ����1   ����2   ����3\n");
//	printf("==============================\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			score[i][j] = rand() % 100 + 1;				// �����Լ��� �̿��� �Է°��� �������� ����
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", i + 1);							// �й� �Է°�
//		for (j = 0; j < 3; j++)
//		{
//			printf("%8d", score[i][j]);					// �������� �ԷµǴ� ������
//		}
//		puts("");
//	}
//	printf("==============================\n");
//
//	//for (j = 0 ; j < 3; j++)
//	//{
//	//	min = max = score[0][j];
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		if (score[i][j] < min)
//	//			min = score[i][j];
//	//		if (score[i][j] > max)
//	//			max = score[i][j];
//	//		sum = sum + score[i][j];
//	//	}
//	//	printf("���� %d: �ִ����� = %d\n", j + 1, max);
//	//	printf("���� %d: �ּ����� = %d\n", j + 1, min);
//	//}
//	output(score);
//
//	return 0;
//}
//
//void output(int score[10][3])
//{
//	int i = 0, j = 0;
//	int min = 0, max = 0, sum = 0;
//	for (j = 0; j < 3; j++)
//	{
//		min = max = score[0][j];
//		for (i = 0; i < 10; i++)
//		{
//			if (score[i][j] < min)
//				min = score[i][j];
//			if (score[i][j] > max)
//				max = score[i][j];
//			sum = sum + score[i][j];
//		}
//		printf("���� %d: �ִ����� = %d\n", j + 1, max);
//		printf("���� %d: �ּ����� = %d\n", j + 1, min);
//	}
//}

// �󵵼� ��� ���α׷�

#include<stdio.h>

int main(void)
{
	int i = 0, score = 0;
	int freq[101] = { 0 };							// ũ�Ⱑ 101�� �迭

	while (1)
	{
		printf("���ڸ� �Է��Ͻÿ�(����-1) : ");
		scanf_s("%d", &score);						// ���� �Է�
		if (score < 0)								// �Էµ� ���ڰ� 0���� ������ ���� break
			break;
		freq[score]++;								// �Էµ� �� �󵵸� ������Ŵ
	}

	printf("��   ��\n");

	for (i = 0; i < 101; i++)
		printf("%3d     %3d\n", i, freq[i]);

	return 0;
}