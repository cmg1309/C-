//9-6
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	int i, j, count = 0;
//	int readnum, same;		
//	int input[6];			// �Է� ��
//	int output[6] = { 0 };	// ���� ��
//	int than[46] = { 0 };	// �Էµ� ���� ������ ��
//	srand(time(NULL));		// �ð����� ���� ����
//
//	printf("������ ���ϴ� �ζ� ��ȣ(1���� 45�� ���� 6��) �Է� -> ");
//	for (i = 0; i < 6; i++)
//	{
//		scanf_s("%d", &input[i]);
//		printf(" %d ", input[i]);
//	}
//	for (i = 0; i < 6; i++)			// �ߺ����� ���� 6���� ���� than �迭�� ������
//	{
//		readnum = rand() % 45 + 1;	
//		if (than[readnum])
//		{
//			i--;
//			continue;
//		}
//		output[i] = readnum;
//		than[readnum]++;
//	}
//	for (i = 0; i < 6; i++)				// ���� ���� ������ ī��Ʈ
//	{
//		same = 0;
//		for (j = 0; j < 6; j++)
//		{
//			if (input[i] == output[j])		// ������ �ִ��� �� �ݺ�
//				same++;						// ������ �� ����
//		}
//		if (same)							// ���� �� ��ŭ ī��Ʈ ����
//			count++;
//	}
//	printf("\n");
//	printf("\n�ζǸ� ��÷�մϴ�. -> \n");
//	for (i = 0; i < 6; i++)
//		printf(" %d ", output[i]);
//	printf("\n");
//	if (count == 7)
//		printf("\n%d�� �¾Ұ�, ��÷�Դϴ�!\n", count);
//	else
//		printf("\n%d�� �¾Ұ�, ���Դϴ�.", count);
//}