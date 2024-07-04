#include <stdio.h>

/**
 * _strncat - Concatenates at most n bytes of the src string to the dest string,
 * overwriting the terminating null byte at the end of dest, and then adds a
 * terminating null byte.
 * @dest: The destination string to be appended to.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n) {
    int i = 0;  // index for dest
    int j = 0;  // index for src

    // Find the end of dest string
    while (dest[i] != '\0') {
        i++;
    }

    // Append src to dest, using at most n bytes from src
    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Add terminating null byte at the end
    dest[i] = '\0';

    return dest;
}

int main() {
    char dest[100] = "Hello";
    char src[] = " World!";
    int n = 3;

    printf("Before concatenation: %s\n", dest);
    _strncat(dest, src, n);
    printf("After concatenation: %s\n", dest);

    return 0;
}
