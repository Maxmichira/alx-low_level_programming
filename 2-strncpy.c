#include <stdio.h>

/**
 * _strncpy - Copies at most n bytes of the src string to the dest string.
 * If the length of src is less than n, additional null bytes are written to dest
 * to ensure that a total of n bytes are written.
 * @dest: The destination buffer where the content is to be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

int main() {
    char dest[100];
    char src[] = "Hello, World!";
    int n = 5;

    _strncpy(dest, src, n);
    printf("After copying: %s\n", dest);

    return 0;
}
