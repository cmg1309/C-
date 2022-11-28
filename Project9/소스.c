//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	char fname[] = "grade.txt";
//	FILE* f;
//	char name[80];
//	int count = 0;
//
//	if (fopen_s(&f, fname, "w") != 0)
//	{
//		printf("문제 발생");
//		exit(1);
//	}
//	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
//
//	//fgets(name, 80, stdin);	// 키보드로 입력받음
//	gets(name, 80);
//	while (!feof(stdin))
//	{
//		fprintf(f, "%d ", ++count);
//		fputs(name, f);
//		fprintf(f, "\n");	// gets() 사용시 줄넘김에 사용
//		//fgets(name, 80, stdin);
//		gets(name, 80);
//	}
//	fclose(f);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(int argc, char*argv[])
//{
//	FILE* f;
//	int ch, cnt = 0;
//
//	if (argc != 2)
//	{
//		printf("문제 발생");
//		exit(1);
//	}
//	if (fopen_s(&f, argv[1], 'r') != 0)
//	{
//		printf("문제 발생");
//		exit(1);
//	}
//	printf("%4d", ++cnt);
//	while ((ch = fgetc(f)) != EOF)
//	{
//		putchar(ch);
//		if (ch == '\n')
//			printf("%4d: ", ++cnt);
//	}
//	printf("\n");
//	fclose(f);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char fname[] = "test.txt";
	char name[80];
	char number[80];
	int mid, final;
	FILE* f;
	int ch;
	
	if (fopen_s(&f, fname, "a") != 0)
	{
		printf("문제 발생");
		exit(1);
	}

	printf("번호와 이름과 성적(중간, 기말)을 입력하세요.\n");
	scanf_s("%s%s%d%d", number, 80, name, 80, &mid, &final);
	fprintf(f, "%s %s %d %d\n", number, name, mid, final);
	fclose(f);


	if (fopen_s(&f, fname, "r") != 0)
	{
		printf("문제 발생");
		exit(1);
	}

	printf("%10s %10s %10s %10s\n", "번호", "이름", "중간", "기말");
	while (!feof(f))
	{
		fscanf_s(f, "%s%s%d%d\n", number, 80, name, 80, &mid, &final);
		printf("%10s %10s %10d %10d\n", number, name, mid, final);
	}
	fclose(f);
	return 0;
}