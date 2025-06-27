#include <stdio.h>

int sum( int n) {
    if ( n <= 0) return 0;
    return n%10 + sum(n/10);
}

int main(void) {
    int n;
    do {
        printf("Nhap n: ");
        scanf("%d",&n);
    }while (n < 0);

    int result = sum(n);
    result == 0 ? printf("Input khong hop le") : printf("%d", result);

    return 0;
}