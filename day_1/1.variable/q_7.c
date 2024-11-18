#include <stdio.h>

void registerAttendees(int numAttendees) {
    printf("Assigned IDs: ");
    for (int i = 1; i <= numAttendees; i++) {
        printf("%d", i);
        if (i < numAttendees) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int numAttendees;

    printf("Enter the number of attendees to register: ");
    scanf("%d", &numAttendees);

    registerAttendees(numAttendees);

    return 0;
}

