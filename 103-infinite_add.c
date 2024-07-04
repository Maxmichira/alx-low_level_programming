#include <stdio.h>

int get_length(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = get_length(n1);
    int len2 = get_length(n2);
    int max_len = (len1 > len2) ? len1 : len2;
    int carry = 0;
    int i, digit1, digit2, sum;

    if (size_r <= max_len + 1) {
        return 0;
    }

    r[max_len + 1] = '\0';

    for (i = 0; i < max_len || carry; i++) {
        digit1 = (len1 - 1 - i >= 0) ? n1[len1 - 1 - i] - '0' : 0;
        digit2 = (len2 - 1 - i >= 0) ? n2[len2 - 1 - i] - '0' : 0;
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[max_len - i] = (sum % 10) + '0';
    }

    if (carry) {
        if (size_r <= max_len + 2) {
            return 0;
        }
        r[0] = '1';
        return r;
    }

    return r + 1;
}

int main() {
    char n1[] = "1234567890";
    char n2[] = "9876543210";
    char result[21];

    if (infinite_add(n1, n2, result, 21) == 0) {
        printf("Error: result cannot be stored in result buffer\n");
    } else {
        printf("Sum: %s\n", result);
    }

    return 0;
}
