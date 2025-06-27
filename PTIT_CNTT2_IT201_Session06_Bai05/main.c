#include <stdio.h>

int findMaxMin( int arr[], int max, int min, int n) {
    if ( n < 0) {
        printf("%d - %d\n", min, max);
        return 0;
    }
    if ( arr[n] <= min) min = arr[n];
    if ( arr[n] >= max) max = arr[n];
    return findMaxMin( arr, max, min, n-1 );
}

int main(void) {
    int n;
    do {
        printf("Please enter a number: ");
        scanf("%d", &n);
    }while (n <=0 );

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    findMaxMin(arr, max, min, n-1);

    return 0;
}