#include <stdio.h>

void square(int x) {            /* call by value */
    printf("square: %d\n", x*x);
}

void swap(int *a, int *b) {     /* call by reference */
    int t = *a; *a = *b; *b = t;
}

int fact(int n) {               /* recursion */
    if (n == 0) return 1;
    return n * fact(n-1);
}

int main(void) {
    int a = 5, b = 10;
    square(a);
    printf("Before swap: %d %d\n", a, b);
    swap(&a, &b);
    printf("After swap: %d %d\n", a, b);
    printf("Factorial of 5: %d\n", fact(5));
    return 0;
}
