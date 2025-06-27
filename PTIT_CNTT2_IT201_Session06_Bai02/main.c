#include <stdio.h>

int fibo( int n) {
    if ( n ==0 ) return 0;
    if ( n == 1 ) return 1;
    return fibo( n-1) + fibo( n-2);
}

int main(void) {
    int n;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
    }while (n <0);

    for ( int i = n -1; i>=0; i--) {
        printf("%d\t", fibo(i));
    }
    return 0;
}
