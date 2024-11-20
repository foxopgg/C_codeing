#include <stdio.h>

int main() {
    char str[100], ch;
    int position = -1;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to search: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            position = i + 1; // 1-based index
            break;
        }
    }

    if (position != -1) {
        printf("Character '%c' found at position: %d\n", ch, position);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
