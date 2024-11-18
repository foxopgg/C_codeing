#include <stdio.h>

int main() {
    int birthYear, currentYear;
    printf("Enter birth year: ");
    scanf("%d", &birthYear);
    printf("Enter current year: ");
    scanf("%d", &currentYear);
    int ageInDays = (currentYear - birthYear) * 365;
    printf("Age in days = %d days\n", ageInDays);
    return 0;
}
