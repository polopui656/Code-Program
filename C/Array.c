#include <stdio.h>

int main() {
    int n;
    double arr[100];
    printf("Enter a Number of Array: ");
    scanf("%d", &n);

    // 
    for(int i = 0; i<n; i++) {
        printf("Enter a Number for Array: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    // storing the largest number to arr[0]
    for(int i = 1; i<n; i++) {
        if(arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    printf("The Largest Number in Array = %.2lf", arr[0]);
}


