#include <stdio.h>

int wordLength(void)
{
    int i;
    unsigned v = (unsigned)~0;
    for (i = 1; ((v = v >> 1) & 1) > 0; ++i)
        ;
    return i;
}

unsigned rightrot(unsigned x, int n)
{
    int rbit;
    int word_length = wordLength();
    while(n--) {
        rbit = x & 1;
        x >>= 1;
        x |= rbit << (word_length-1);
    }
    return x;
}

int main()
{
    printf("%X\n", rightrot(0xF2, 4));
    return 0;
}

