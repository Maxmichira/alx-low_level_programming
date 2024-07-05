#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str) {
    char *ptr = str;
    char rot13_map[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13_replace[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < 52; j++) {
            if (str[i] == rot13_map[j]) {
                str[i] = rot13_replace[j];
                break;
            }
        }
    }

    return str;
}

int main() {
    char str[] = "Hello, World! This is a test.";

    printf("Original string: %s\n", str);
    printf("Encoded string: %s\n", rot13(str));

    return 0;
}
