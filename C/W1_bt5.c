#include <stdio.h>
 
int main(){
    int n, tmp;
    printf("Nhap so n:");
    scanf("%d", &n);
    int res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    printf("%d", res);
}
