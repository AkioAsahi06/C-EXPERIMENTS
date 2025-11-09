#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
};

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    struct Student s = {1, "Alice"};
    printf("Student: %d %s\n", s.id, s.name);

    union Data d;
    d.i = 10;
    printf("Union integer: %d\n", d.i);
    d.f = 3.14;
    printf("Union float: %.2f\n", d.f);
    strcpy(d.str, "Hello");
    printf("Union string: %s\n", d.str);

    return 0;
}
