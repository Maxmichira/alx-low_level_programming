#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }

    return s1[i] - s2[i];
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    printf("Comparing '%s' and '%s': %d\n", str1, str2, _strcmp(str1, str2)); // Should return 0
    printf("Comparing '%s' and '%s': %d\n", str1, str3, _strcmp(str1, str3)); // Should return a negative value
    printf("Comparing '%s' and '%s': %d\n", str3, str1, _strcmp(str3, str1)); // Should return a positive value

    return 0;
}
