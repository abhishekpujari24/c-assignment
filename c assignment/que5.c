#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    int uppercase_count = 0, lowercase_count = 0, digit_count = 0, other_count = 0;

    printf("Enter a string: ");
    
    while ((input = getchar()) != '\n') {
        if (isupper(input)) {
            uppercase_count++;
        } else if (islower(input)) {
            lowercase_count++;
        } else if (isdigit(input)) {
            digit_count++;
        } else {
            other_count++;
        }
    }

    printf("Uppercase characters: %d\n", uppercase_count);
    printf("Lowercase characters: %d\n", lowercase_count);
    printf("Digits: %d\n", digit_count);
    printf("Other characters: %d\n", other_count);

    return 0;
}
