#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}

