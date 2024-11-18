#include <stdio.h>

int main() {
    int rating;
    char comment[100];

    printf("Enter rating (1-5): ");
    scanf("%d", &rating);
    getchar(); // to consume the newline left by scanf
    printf("Enter your comment: ");
    fgets(comment, 100, stdin);

    printf("Rating: %d, Comment: %s", rating, comment);
    return 0;
}
