#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

#define FILE_NAME "test.txt"
#define BUF_SIZE 1024

int main(void)
{
	char write_buf[BUF_SIZE] = "Hello world-test file";
	char read_buf[BUF_SIZE] = "";
	clock_t start1, end1;
	float res1;

	FILE* fp = NULL;

	start1 = clock();

	fp = fopen(FILE_NAME, "r");
	if (fp == NULL)
	{
		printf("open error\n");
		return 1;
	}
	fread(read_buf, 16, sizeof(write_buf), fp);
	printf("test.txt ���� �������� = [%s]\n", read_buf);
	fclose(fp);

	fp = fopen(FILE_NAME, "w");
	//fp = fopen("result.txt", "w");
	if (fp == NULL)
	{
		printf("open error\n");
		return 1;
	} 
	fwrite(write_buf, sizeof(char), sizeof(write_buf), fp);
	fclose(fp);

	end1 = clock();

	res1 = (float)(end1 - start1) / CLOCKS_PER_SEC;
	printf(" �ҿ�� �ð� : %.3f \n", res1);
	printf(" ���� �ð�= %d \n", start1);
	printf(" ���� �ð� = %d \n", end1);

	return 0;
}