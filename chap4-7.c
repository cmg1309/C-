#include<stdio.h>

int main(void)
{
	double r = 7.58, PHI = 3.14;                 // ������, ������
	double V = (4.0 * 3.0) * PHI * r * r * r;    // ���� ü��
	double S = 4.0 * PHI * r * r;                // ���� ǥ����
	    
	printf("�� ü�� : %lf\n", V);                // doulbe ����ؼ� lf���
	printf("�� ǥ���� : %lf\n", S);              // doulbe ����ؼ� lf���

	return 0;
}