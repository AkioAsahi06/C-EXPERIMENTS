#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int i, j;
    char t;
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

void sort(char s[]) {
    int i, j; char t;
    for(i = 0; i < strlen(s) - 1; i++)
        for(j = i + 1; j < strlen(s); j++)
            if(s[i] > s[j]) { t = s[i]; s[i] = s[j]; s[j] = t; }
}

int main() {
    char a[100], b[100], c[200];
    
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0;  // remove newline

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = 0;

    printf("\nLength: %d , %d", (int)strlen(a), (int)strlen(b));

    reverse(a);
    reverse(b);
    printf("\nReversed: %s , %s", a, b);

    strcpy(c, a);
    strcat(c, b);
    printf("\nConcatenated: %s", c);

    int cmp = strcmp(a, b);
    printf("\nComparison: ");
    if(cmp == 0) printf("Equal");
    else if(cmp > 0) printf("%s > %s", a, b);
    else printf("%s < %s", a, b);

    sort(a); 
    sort(b);
    printf("\nSorted: %s , %s", a, b);

    return 0;
}
