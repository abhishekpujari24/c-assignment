#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5

int main() {
    char *strings[MAX_STRINGS] = {"apple", "banana", "orange", "apple", "grape"};

    for (int i = 0; i < MAX_STRINGS - 1; i++) {
        for (int j = i + 1; j < MAX_STRINGS; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("Duplicated string: %s\n", strings[i]);
                break;  
            }
        }
    }

    return 0;
}
