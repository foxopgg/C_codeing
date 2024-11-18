#include <stdio.h>

int main() {
    int books[7], total_books = 0;
    printf("Enter the number of books borrowed each day for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &books[i]);
        total_books += books[i];
    }
    printf("Total books borrowed = %d\n", total_books);
    return 0;
}
