#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }

    return str;
}

int main() {
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    printf("Uppercase string: %s\n", string_toupper(str));

    return 0;
}
