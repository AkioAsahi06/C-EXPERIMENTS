#include <stdio.h>

int main() {
    int choice;

    printf("Enter 1 for Addition, 2 for Subtraction: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Addition\n");
            break;
        
        case 2:
            printf("You selected Subtraction\n");
            break;
        
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
