    #include <stdio.h>
int main() {
    int marks, income;
    printf("Enter marks: ");
    scanf("%d", &marks);
    printf("Enter family income: ");
    scanf("%d", &income);

    if (marks > 90 && income < 200000) {
        printf("Output: Eligible\n");
    } else {
        printf("Output: Not Eligible\n");
    }
    return 0;
}
