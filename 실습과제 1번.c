#include<stdio.h>

int main(void) 
{
	double n1 = 0, n2 = 0;

	printf("½Ç¼ö1 ÀÔ·Â?:");
	scanf_s("%lf", &n1);
	printf("½Ç¼ö2 ÀÔ·Â?:");  
	scanf_s("%lf", &n2);
	printf("%7.2lf / %7.2lf = %15.2lf", n1, n2, n1 / n2);

	return 0;  
}
