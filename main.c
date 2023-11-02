#include <stdio.h>

static int is_it_printable(char c) {
    return (c >= 32 && c <= 126);
}

int main() {
    char c;

    c = 'x';

    printf("The value of is_it_printable('x') is %d\n", is_it_printable(c));

    if (is_it_printable(c)) {
        printf("'%c' is printable\n", c);
    } else {
        printf("'%c' is not printable\n", c);
    }

    return 0;
}
