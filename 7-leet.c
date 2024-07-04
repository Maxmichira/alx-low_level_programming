#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * Letters a and A are replaced by 4
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @str: The string to be encoded.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str) {
    char *ptr = str;
    char leet_map[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
    char leet_replace[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < 10; j++) {
            if (str[i] == leet_map[j]) {
                str[i] = leet_replace[j];
                break;
            }
        }
    }

    return str;
}

int main() {
    char str[] = "Hello, World! This is a test.";

    printf("Original string: %s\n", str);
    printf("Encoded string: %s\n", leet(str));

    return 0;
}

