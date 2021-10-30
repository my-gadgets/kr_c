#include <stdio.h>

int lower(int c)
{
    return 'A' >= c && c <= 'Z' ? (c-'A'+'a') : c;
}

int main()
{
    printf("%c\n", lower('A'));
    printf("%c\n", lower('b'));
    return 0;
}

