#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(const char *str) {
    // Check if the input string is NULL
    if (str == NULL) {
        return NULL;
    }

    // Determine the length of the input string
    size_t length = strlen(str);

    // Allocate memory for the duplicated string
    char *duplicate = (char *)malloc(length + 1); // +1 for the null terminator

    // Check if memory allocation was successful
    if (duplicate == NULL) {
        return NULL; // Insufficient memory
    }

    // Copy the content of the input string to the duplicated string
    strcpy(duplicate, str);

    return duplicate;
}

int main() {
    const char *original = "Hello, World!";
    char *duplicate = _strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicated: %s\n", duplicate);

        // Don't forget to free the duplicated string when done with it
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
