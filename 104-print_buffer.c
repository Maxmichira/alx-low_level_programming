#include "main.h"

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to print
 * @size: The number of bytes to print from the buffer
 */
void print_buffer(char *b, int size)
{
    int offset, byte, byte2;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (offset = 0; offset < size; offset += 10)
    {
        _printf("%08x: ", offset);

        for (byte = 0; byte < 10; byte++)
        {
            if (offset + byte < size)
                _printf("%02x", b[offset + byte]);
            else
                _printf("  ");
            if (byte % 2 != 0)
                _printf(" ");
        }

        for (byte2 = 0; byte2 < 10; byte2++)
        {
            if (offset + byte2 < size)
            {
                if (_isprint(b[offset + byte2]))
                    _putchar(b[offset + byte2]);
                else
                    _putchar('.');
            }
        }
        _putchar('\n');
    }
}

