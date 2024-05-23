#include <stdio.h>

int main(){
    int day, month, year;
    printf("Nhap ngay: ");
    scanf("%d",&day);
    printf("Nhap thang: ");
    scanf("%d",&month);
    printf("Nhap nam: ");
    scanf("%d",&year);
    if(day > 0 || day <= 31){
        if(month > 0 || month <= 12){
            if(year > 2000 || year <= 2024){
                printf("%d-%d-%d",day,month,year);
            }
        }
    }
    else{
        printf("Error");
    }
}