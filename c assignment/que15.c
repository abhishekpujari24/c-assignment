#include <stdio.h>
#include <ctype.h>

#define ALPHABET_COUNT 26

int main() {
    char str[100];
    int count[ALPHABET_COUNT] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = toupper(str[i]);
            count[ch - 'A']++;
        }
    }

    printf("Output:\n");
    for (int i = 0; i < ALPHABET_COUNT; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
