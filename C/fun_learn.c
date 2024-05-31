#include <stdio.h>
#include <conio.h>
#include <string.h>
char Hoten[30];
int Van;
int Toan;
float DiemTrungBinh;

void Nhap()
{
    fflush(stdin);
    printf("Nhap Ho ten: ");
    gets(Hoten);

    printf("Nhap Diem Van: ");
    scanf("%d", &Van);

    printf("Nhap Diem Toan: ");
    scanf("%d", &Toan);
}

void Xuly()
{
    DiemTrungBinh = (Toan + Van) / 2.0;
}

void Xuat()
{
    printf("\nHo ten: %s", Hoten);
    printf("\nToan: %d", Toan);
    printf("\nVan: %d", Van);
    printf("\nDiemTrungBinh: %0.1f", DiemTrungBinh);
}

int main()
{
    Nhap();
    Xuly();
    Xuat();

    getch();
    return 0;
}