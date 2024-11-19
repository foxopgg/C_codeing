#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age <= 12) {
        printf("Output: Child\n");
    } else if (age >= 13 && age <= 19) {
        printf("Output: Teen\n");
    } else {
        printf("Output: Adult\n");
    }
    return 0;
}
