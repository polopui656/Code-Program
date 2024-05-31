#include <stdio.h>
#include <math.h>

int isPrimeNumber(int n) {
    if(n < 2) {
        return 0;
    }
    int squareRoot = (int) sqrt(n);
    int i;
    for(i = 1; i <= squareRoot; i++) {
        if(n % 2 == 0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int i;
    printf("\ncac so nguyen trong 100: ");
    for(i = 1; i < 100; i++) {
        if(isPrimeNumber(i)) {
            printf("%d ", i);
        }
    }
}