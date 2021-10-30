#include <stdio.h>

/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x &= (x-1))
        ++b;
    return b;
}

int main()
{
    printf("%d\n", bitcount(0xFF));
    printf("%d\n", bitcount(0x7F));

    return 0;
}

