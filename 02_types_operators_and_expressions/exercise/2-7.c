#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
    return x ^ (~(~0<<n)) << (p+1-n);
}

int main()
{
    unsigned a = 0xFF2FF;
    printf("%X\n", invert(a, 11, 4));
    return 0;
}

