#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	// 12-1
	//char fname[] = "basic.txt";
	//char name[30] = "������";
	//int point = 99;
	//FILE* f;
	//errno_t err;

	//if (err = fopen_s(&f, fname, "w") != 0)
	//{
	//	printf("������ �������ʽ��ϴ�.");
	//	exit(1);
	//}

	//fprintf(f, "�̸��� %s�� �л��� ������ %d�Դϴ�.", name, point);
	//fclose(f);
	//fprintf(stdout, "������Ʈ �������� ���� basic.txt�� �޸������� �������.");
	////puts("������Ʈ �������� ���� basic.txt�� �޸������� �������."); = fprintf(stdout,"~~~") ����


	// 12-2
	//char fname[] = "grade.txt";
	//char name[30];
	//FILE* f;
	//int point1, point2, cnt = 0;

	//if (fopen_s(&f, fname, "w") != NULL)
	//{
	//	printf("������ ������ �ʽ��ϴ�.");
	//	exit(1);
	//}

	//printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	//scanf_s("%s%d%d", name, 30, &point1, &point2);
	///*fscanf_s(f, "%s%d%d", name, 30, &point1, &point2);*/
	//fprintf(f, "%d %s %d %d", ++cnt, name, point1, point2);
	//fclose(f);

	//if (fopen_s(&f, fname, "r") != NULL)
	//{
	//	printf("������ ������ �ʽ��ϴ�.");
	//	exit(1);
	//}

	//fscanf_s(f, "%d %s %d %d", &cnt, name, 30, &point1, &point2);
	//fprintf(stdout, "\n%6s%16s%10s%8s\n", "��ȣ", "�̸�", "�߰�", "�⸻");
	//fprintf(stdout, "%5d%18s%8d%8d\n", cnt, name, point1, point2);
	//fclose(f);


	// �ǽ�����
	char fname[] = "g.txt";
	char name[30];
	double mid, final;
	double avg = 0;
	FILE* f;

	if (fopen_s(&f, fname, "w") != NULL)
	{
		printf("���� ���� ����");
		exit(1);
	}
	printf("�̸�,, �߰�, �⸻��縦 �Է� : ");
	scanf_s("%s %lf %lf", name, 30, &mid, &final);
	avg = (mid + final) / 2.0;

	fprintf(f, "%s %.2lf %.2lf %.2lf\n", name, mid, final, avg);
	fclose(f);

	if (fopen_s(&f, fname, "r") != NULL)
	{
		printf("���� ���� ����");
		exit(1);
	}
	
	fscanf_s(f, "%s%lf%lf%lf\n", name, 30, &mid, &final, &avg);
	fprintf(stdout, "\n----------------------------------\n");
	fprintf(stdout, "%s %7s %7s %7s", "�̸�", "�߰�", "�⸻", "���");
	fprintf(stdout, "\n----------------------------------\n");
	fprintf(stdout, "%s  %.2lf  %.2lf  %.2lf\n", name, mid, final, avg);
	fclose(f);
}