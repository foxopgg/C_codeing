#include <stdio.h>

int main() {
    char grade;
    printf("Enter the student's grade (A-F): ");
    scanf(" %c", &grade); // Note the space before %c to ignore newline

    printf("Grade: %c\n", grade);
    return 0;
}
