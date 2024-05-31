#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100

	struct Student {
	char id[8];
	char fullname[255];
	double point;
    };
int quantity;
struct Student st[MAX];
int main()
{
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &quantity);

	for (int i = 0; i < quantity; i++) {
			printf("Nhap thong tin sinh vien thu %d", i + 1);
			printf("\nNhap id: ");
			fflush(stdin);
			gets(st[i].id);
            printf("Nhap ho ten: ");
            fflush(stdin);
            gets(st[i].fullname);
            printf("Nhap diem: ");
            scanf("%lf",&st[i].point);
	}
    printf("\nHien thi %d sinh vien da nhap:",quantity);
	/*
    for (int i = 0; i < quantity; i++) {
			printf("\nSinh vien thu %d \n", i + 1);
			printf("ID: %s \n",st[i].id);
            printf("FullName: %s \n",st[i].fullname);
            printf("Point: %.lf \n",st[i].point);
   
	}
	*/
	  for (int i = 0; i < quantity; i++) {
			printf("\n%d \t", i + 1);
			printf("%s \t",st[i].id);
            printf("%s \t",st[i].fullname);
            printf("%.lf \t",st[i].point);
			printf("\n");
   
	}
	system("pause");
	return 0;
}