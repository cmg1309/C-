//8-7
//#include<stdio.h>
//
//int main(void)
//{
//	int i;
//	double data[10] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
//	double max = data[0];		// ���� ū ���� ���� ���� �迭�� ù��° ��ҷ� ����
//	double min = data[0];
//	double result = 0;
//
//	for (i = 0; i < 10; i++)	
//	{
//		if (data[i] > max)		 // data[0]�� max�� ������ �迭�� �ݺ��ϸ鼭 ��
//			max = data[i];
//		else if (data[i] < min)  // data[0]�� min�� ������ �迭�� �ݺ��ϸ鼭 ��
//			min = data[i];
//	}
//	printf("�ִ밪 : %.2lf, ", max);
//	printf("�ּҰ� : %.2lf\n", min);
//	result = max - min;
//	printf("�ִ밪 - �ּҰ� = %.2lf", result);
//}