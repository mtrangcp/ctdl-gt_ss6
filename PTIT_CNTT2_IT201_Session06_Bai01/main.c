#include <stdio.h>
int recursion( int number) {
    if ( number == 0 ) {
        return 0;
    }
    recursion(number/2);
    printf("%d", number%2);
}

int main(void) {
    int n;
    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    }while (n < 0);
    recursion(n);
    return 0;
}