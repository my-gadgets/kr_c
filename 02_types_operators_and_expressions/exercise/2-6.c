#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return (x & ~(~(~0<<n) << (p+1-n))) |
           (y & ~(~0<<n)) << (p+1-n);
}

int main()
{
    unsigned a = 0x12;
    unsigned b = 0xF0;
    unsigned res = setbits(a, 3, 4, b);
    printf("%x\n", res);
    printf("%x\n", setbits(a, 7, 4, b));

    return 0;
}

