#include <stdio.h>

int arrange( int n, char a, char b, char c) {
    if ( n == 0 ) return 0;
    arrange(n-1, a, c, b);

    printf("dia %d di chuyen tu %c den %c\n", n, a, c);
    arrange(n-1, b, a, c);
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if ( n == 1 ) {
        printf("dia 1 di chuyen tu A sang C");
        return 0;
    }
    arrange(n, 'A', 'B', 'C');

    return 0;
}