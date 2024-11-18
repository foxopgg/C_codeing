#include <stdio.h>

int main() {
    int attendees;
    printf("Enter the number of attendees: ");
    scanf("%d", &attendees);

    for (int i = 1; i <= attendees; i++) {
        printf("Assigned ID = %d\n", i);
    }
    return 0;
}
