#include <conio.h>
#include <stdio.h>
#include <string.h>
struct  Student
{   char Name[15];
     int Age;
};

struct  Students
{   
    char Name[15];
    int Age;
};
//typedef struct Student st;
//struct Students stu[100]; 
typedef struct Students students;
void NhapSV(students stu[],int *n);
void XuatSV(students stu[],int n);
void main()
{	

    struct Student st;
	int n;
    /*
	printf("Nhap ho ten:"); 
	gets(st.Name);
	printf("Nhap tuoi:"); 
	scanf("%d",&st.Age);
    printf("%20s %3d", st.Name,st.Age);
    */
    students stu[100]; 
    NhapSV(stu,&n);
    XuatSV(stu,n);

   
	getch();
}
void NhapSV(students stu[],int *n)
{
    int i;
    printf("Nhap vao so luong sinh vien:");
    scanf("%d",n);
    fflush(stdin);
   for(i=0;i<*n;i++)
   {
        printf("Nhap ho ten:"); 
        gets(stu[i].Name);
        fflush(stdin);
        printf("Nhap tuoi:"); 
        scanf("%d",&stu[i].Age);
        fflush(stdin);
   }
}
void XuatSV(students stu[],int n)
{
    int i;
    printf("Xuat thong tin sinh vien:\n"); 
   printf("Ten\tTuoi\t\n");
   for(i=0;i<n;i++)
   {
        printf("%s\t%d\n",stu[i].Name,stu[i].Age); 
    }
}