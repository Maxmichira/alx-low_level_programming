#include <stdio.h>
#include <ctype.h>

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
        printf("\n");
        return;
    }

    for (offset = 0; offset < size; offset += 10)
    {
        printf("%08x: ", offset);
        
        for (byte = 0; byte < 10; byte++)
        {
            if (offset + byte < size)
                printf("%02x", b[offset + byte]);
            else
                printf("  ");
            if (byte % 2 != 0)
                printf(" ");
        }
        
        for (byte2 = 0; byte2 < 10; byte2++)
        {
            if (offset + byte2 < size)
            {
                if (isprint(b[offset + byte2]))
                    printf("%c", b[offset + byte2]);
                else
                    printf(".");
            }
        }
        printf("\n");
    }
}

int main()
{
    char buffer[] = "This is a buffer to test the print_buffer function. It contains text and other things.\nNew line here.\tTab here.\0Non-printable: \x01\x02\x03";
    int size = sizeof(buffer) - 1;

    print_buffer(buffer, size);
    
    return 0;
}
