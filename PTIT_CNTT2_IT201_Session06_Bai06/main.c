#include <stdio.h>

int count( int n ) {
    if ( n == 0 ) return 1;
    if ( n < 0 ) return 0;
    return  count( n - 1 ) + count( n -2);
}

int main(void) {
    int n;
    do {
        printf("Nhap so bac thang: ");
        scanf("%d", &n);
    }while (n <= 0);

    int result = count(n);
    printf("kq: %d", result);

    return 0;
}