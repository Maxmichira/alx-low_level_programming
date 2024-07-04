#include <stdio.h>
#include <stdbool.h>

bool is_separator(char c) {
    char separators[] = " \t\n,;.!?\"(){}";
    for (int i = 0; separators[i] != '\0'; i++) {
        if (c == separators[i]) {
            return true;
        }
    }
    return false;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str) {
    int i = 0;

    // Capitalize the first character if it's a lowercase letter
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] -= ('a' - 'A');
    }
    i++;

    // Traverse the rest of the string
    while (str[i] != '\0') {
        if (is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] -= ('a' - 'A');
        }
        i++;
    }

    return str;
}

int main() {
    char str[] = "hello, world! this is a test. how are you?";

    printf("Original string: %s\n", str);
    printf("Capitalized string: %s\n", cap_string(str));

    return 0;
}
