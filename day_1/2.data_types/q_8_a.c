#include <stdio.h>
#include <time.h>

int calculate_age(int birth_year, int birth_month, int birth_day) {
    time_t t = time(NULL);
    struct tm current_time = *localtime(&t);
    int current_year = current_time.tm_year + 1900; 
    int current_month = current_time.tm_mon + 1; 
    int current_day = current_time.tm_mday;
    int age = current_year - birth_year;
    if (current_month < birth_month || 
        (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    return age;
}

int main() {
    int birth_year, birth_month, birth_day;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    printf("Enter your birth month (1-12): ");
    scanf("%d", &birth_month);
    printf("Enter your birth day (1-31): ");
    scanf("%d", &birth_day);

    int age = calculate_age(birth_year, birth_month, birth_day);
    printf("Your age is: %d years\n", age);

    return 0;
}
