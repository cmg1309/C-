#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct selfref
{
	int n;
	struct selfref* next;
};
typedef struct selfref list;

int main(void)
{
	// �ǽ����� 1��
	//char temp[80];
	//char* str[3];
	//int i;

	//for (i = 0; i < 3; i++)
	//{
	//	printf("���ڿ��� �Է��ϼ��� : ");
	//	gets(temp);
	//	str[i] = (char*)malloc(strlen(temp) + 1);		// temp ���̿� + 1(\0)
	//	strcpy(str[i], temp);							// temp���� str�� ��������
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	printf("%s\n", str[i]);
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	free(str[i]);
	//}


	// �ǽ����� 2��
	//char* data = 0;
	//int input = 0;

	//printf("�Է��� �������� ������ �Է¼��� : ");
	//scanf_s("%d", &input);

	//if ((data = (char*)calloc(input + 1, sizeof(char))) == NULL)
	//{
	//	printf("�޸��Ҵ翡 �����߻�");
	//	exit(1);
	//}

	//printf("%d���� ������ �Է� : ", input);
	//scanf_s("%s", data, input + 1);					// �Է��� ������ \0���� �־�ߵǼ� +1

	//printf("�Է��� ���ڿ� : %s\n", data);
	//free(data);


	// �ǽ����� 3��
	//int* ip;
	//int size = 5, cnt = 0, num, i;

	//ip = (int*)calloc(size, sizeof(int));
	//while (1)
	//{
	//	printf("����� �Է��ϼ��� : ");
	//	scanf_s("%d", &num);
	//	if (num <= 0)	// 0���� ������ �ݺ� ����
	//		break;

	//	if (cnt < size)
	//	{
	//		ip[cnt++] = num;	// size 5���� ������ ip�� ��� ����
	//	}

	//	else
	//	{
	//		size += 5;
	//		ip = (int*)realloc(ip, size * sizeof(int));	// cnt�� 0~4���� ���� else ���� -> �߰��� 5�� ���� �Է°���
	//		ip[cnt++] = num;
	//	}
	//}
	//for (i = 0; i < cnt; i++)
	//{
	//	printf("%5d", ip[i]);
	//}
	//free(ip);


	// 13-1
	//int* pi = 0;

	//if ((pi = (int*)malloc(sizeof(int))) == NULL)
	//{
	//	printf("�޸� �Ҵ翡 ���� �߻�");
	//	exit(1);
	//}
	//*pi = 3;
	//printf("*pi = %d\n", *pi);
	//printf("pi = %d\n", pi);


	// 13-2
	//int* ary = NULL;
	//int i = 0, n = 0, sum = 0;

	//printf("�Է��� ������ ������ �Է� : ");
	//scanf_s("%d", &n);

	//if ((ary = (int*)malloc(sizeof(int) * n)) == NULL)
	//{
	//	printf("�޸� �Ҵ翡 ���� �߻�");
	//	exit(1);
	//}

	//printf("%d���� ���� �Է� : ", n);
	//for (i = 0; i < n; i++)
	//{
	//	scanf_s("%d", (ary + i));
	//	sum += ary[i];		// == *(ary + i)
	//}
	//printf("��: %d  ���: %.1f\n", sum, (double)sum / n);
	//free(ary);


	// 13-3
	//int* ary = NULL;
	//int i;

	//if ((ary = (int*)calloc(3, sizeof(int))) == NULL)
	//{
	//	printf("�޸� �Ҵ翡 ���� �߻�");
	//	exit(1);
	//}
	//
	//for (i = 0; i < 3; i++)
	//{
	//	printf("ary[%d] = %d\n", i, *(ary + i));
	//}
	//free(ary);


	// 13-4
	//int* reary, * cary;
	//int i;

	//if ((cary = (int*)calloc(3, sizeof(int))) == NULL)
	//{
	//	printf("�޸� �Ҵ翡 ���� �߻�");
	//	exit(1);
	//}
	//if ((reary = (int*)realloc(cary, 4 * sizeof(int))) == NULL)		// 0~2����, �� 3���� NULL ������ �ʱ�ȭ ������ 3��° ���� �����Ⱚ���� ��µ�
	//{
	//	printf("�޸� �Ҵ翡 ���� �߻�");
	//	exit(EXIT_FAILURE);
	//}
	//for (i = 0; i < 4; i++)
	//{
	//	printf("reary[%d] = %d\n", i, *(reary + i));
	//}
	//free(reary);


	// 13-5
	list* first = NULL, * second = NULL;
	first = (list*)malloc(sizeof(list));		// ����ü ũ�⸸ŭ
	second = (list*)malloc(sizeof(list));
	first->n = 100;
	first->next = NULL;
	second->n = 200;
	second->next = NULL;
	first->next = second;		// first->next�� second �ּ�

	printf("����ü ũ�� = %d\n\n", sizeof(list));
	printf("ù ��° ����ü : ");
	printf("\t�ڷ��� �ּҰ�(first) = %u\n", first);
	printf("\t�ڷᰪ(first->n) = %d\n", first->n);
	printf("\t�ڷᰪ(first->next) = %d\n", first->next);
	printf("\t�ڷᰪ(first->next->n) = %d\n\n", first->next->n);

	printf("�� ��° ����ü : ");
	printf("\t�ڷ��� �ּҰ�(second) = %u\n", second);
	printf("\t�ڷᰪ(second->n) = %d\n", second->n);
	printf("\t�ڷᰪ(second->next) = %d\n", second->next);
	printf("\t�ڷᰪ(second->next->n) = %d\n\n", second->next->n);

	free(first);
	free(second);
}