#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d numbers:\n", n);
    printf("%d, %d, ", first, second);

    for (int i = 2; i < n; i++) {
        next = first + second;
        printf("%d", next);
        if (i < n - 1)
            printf(", ");
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
