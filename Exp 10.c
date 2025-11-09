#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    p = (int*)malloc(n * sizeof(int));
    if (!p) return printf("No memory\n"), 0;

    printf("Enter %d nums: ", n);
    for (i = 0; i < n; i++) scanf("%d", p + i);

    printf("Using malloc: ");
    for (i = 0; i < n; i++) printf("%d ", p[i]);

    p = realloc(p, n * 2 * sizeof(int));
    printf("\nAfter realloc (size x2)\n");

    free(p);

    int *c = (int*)calloc(n, sizeof(int));
    printf("Using calloc: ");
    for (i = 0; i < n; i++) printf("%d ", c[i]);
    free(c);

    return 0;
}
