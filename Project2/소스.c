#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	// 12-1
	//char fname[] = "basic.txt";
	//char name[30] = "원보람";
	//int point = 99;
	//FILE* f;
	//errno_t err;

	//if (err = fopen_s(&f, fname, "w") != 0)
	//{
	//	printf("파일이 열리지않습니다.");
	//	exit(1);
	//}

	//fprintf(f, "이름이 %s인 학생의 성적은 %d입니다.", name, point);
	//fclose(f);
	//fprintf(stdout, "프로젝트 폴더에서 파일 basic.txt를 메모장으로 열어보세요.");
	////puts("프로젝트 폴더에서 파일 basic.txt를 메모장으로 열어보세요."); = fprintf(stdout,"~~~") 같음


	// 12-2
	//char fname[] = "grade.txt";
	//char name[30];
	//FILE* f;
	//int point1, point2, cnt = 0;

	//if (fopen_s(&f, fname, "w") != NULL)
	//{
	//	printf("파일이 열리지 않습니다.");
	//	exit(1);
	//}

	//printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	//scanf_s("%s%d%d", name, 30, &point1, &point2);
	///*fscanf_s(f, "%s%d%d", name, 30, &point1, &point2);*/
	//fprintf(f, "%d %s %d %d", ++cnt, name, point1, point2);
	//fclose(f);

	//if (fopen_s(&f, fname, "r") != NULL)
	//{
	//	printf("파일이 열리지 않습니다.");
	//	exit(1);
	//}

	//fscanf_s(f, "%d %s %d %d", &cnt, name, 30, &point1, &point2);
	//fprintf(stdout, "\n%6s%16s%10s%8s\n", "번호", "이름", "중간", "기말");
	//fprintf(stdout, "%5d%18s%8d%8d\n", cnt, name, point1, point2);
	//fclose(f);


	// 실습예제
	char fname[] = "g.txt";
	char name[30];
	double mid, final;
	double avg = 0;
	FILE* f;

	if (fopen_s(&f, fname, "w") != NULL)
	{
		printf("파일 열기 오류");
		exit(1);
	}
	printf("이름,, 중간, 기말고사를 입력 : ");
	scanf_s("%s %lf %lf", name, 30, &mid, &final);
	avg = (mid + final) / 2.0;

	fprintf(f, "%s %.2lf %.2lf %.2lf\n", name, mid, final, avg);
	fclose(f);

	if (fopen_s(&f, fname, "r") != NULL)
	{
		printf("파일 열기 오류");
		exit(1);
	}
	
	fscanf_s(f, "%s%lf%lf%lf\n", name, 30, &mid, &final, &avg);
	fprintf(stdout, "\n----------------------------------\n");
	fprintf(stdout, "%s %7s %7s %7s", "이름", "중간", "기말", "평균");
	fprintf(stdout, "\n----------------------------------\n");
	fprintf(stdout, "%s  %.2lf  %.2lf  %.2lf\n", name, mid, final, avg);
	fclose(f);
}