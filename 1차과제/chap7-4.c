//7-4
//#include<stdio.h>
//
//void freq(int data[]);
//
//int main(void)
//{
//	int i;
//	int data[20];
//
//	printf("0~9������ ������ 20���� �Է��ϼ���. : ");
//	for (i = 0; i < 20; i++)
//	{
//		scanf_s("%d", &data[i]);
//	}
//	freq(data);
//}
//
//void freq(int data[])
//{
//	int freqdata[10] = { 0 }; // �迭 data�� �Էµ� �󵵼��� ������ �迭
//	int i, result, max = 0;
//
//	for (i = 0; i < 20; i++) // �迭 data�� �󵵼��� ī���ͽ�Ŵ
//		++freqdata[data[i]];
//
//	for (i = 0; i < 10; i++)
//		if (freqdata[i] > max)
//		{
//			max = freqdata[i]; // ���� �󵵼��� �������� �迭�� ����
//			result = i;     // ���� ���� ���¼��� max�� ����
//		}
//
//	printf("\n0 ~ 9 �߰��� ���� ���¼��� %d�̰�, %d�����Խ��ϴ�.\n", result, freqdata[result]);
//}