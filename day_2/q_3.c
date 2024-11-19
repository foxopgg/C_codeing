#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf(" %c", &ch);
    if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an Alphabet\n");
    }
    return 0;
}
