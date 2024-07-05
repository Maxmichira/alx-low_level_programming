#include <stdio.h>

int _putchar(char c);

/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to be printed.
 */
void print_number(int n) {
    unsigned int num;

    if (n < 0) {
        _putchar('-');
        num = -n;
    } else {
        num = n;
    }

    if (num / 10) {
        print_number(num / 10);
    }

    _putchar((num % 10) + '0');
}

/* The _putchar function is usually defined elsewhere (like in a header or another source file),
   but for the purpose of this example, let's define a simple version that prints to stdout. */
int _putchar(char c) {
    return putchar(c);
}

int main() {
    print_number(98);
    _putchar('\n');
    print_number(-402);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(123456789);
    _putchar('\n');
    print_number(-123456789);
    _putchar('\n');

    return 0;
}
