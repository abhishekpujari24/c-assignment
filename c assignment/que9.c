#include <stdio.h>

void decimal_to_binary(int n) {
    if (n == 0)
        return;
    decimal_to_binary(n / 2);
    printf("%d", n % 2);
}

void decimal_to_octal(int n) {
    if (n == 0)
        return;
    decimal_to_octal(n / 8);
    printf("%d", n % 8);
}

void decimal_to_hexadecimal(int n) {
    if (n == 0)
        return;
    decimal_to_hexadecimal(n / 16);
    int remainder = n % 16;
    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", 'A' + (remainder - 10));
}

int main() {
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Given Number: %d\n", number);

    printf("Binary equivalent: ");
    decimal_to_binary(number);
    printf("\n");

    printf("Octal equivalent: ");
    decimal_to_octal(number);
    printf("\n");

    printf("Hexadecimal equivalent: ");
    decimal_to_hexadecimal(number);
    printf("\n");

    return 0;
}
