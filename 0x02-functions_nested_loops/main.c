#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++) // jumps from 'A'(65) to 'B'(66) to ... in order.
    {
        char small = tolower(x);
        putchar(small);
    }

    putchar('\n);
    return 0;
}
