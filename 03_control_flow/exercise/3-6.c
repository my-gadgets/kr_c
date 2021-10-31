#include <stdio.h>
#include <limits.h>

void reverse(char s[], int l, int r)
{
    char t;
    while (l < r) {
        t = s[l];
        s[l] = s[r];
        s[r] = t;
        ++l, --r;
    }
}

void itoa(int n, char s[], int min_width)
{
    unsigned unsigned_n;
    int sign;
    if ((sign = n) < 0)
        unsigned_n = -n;
    else
        unsigned_n = n;

    int i = 0;
    do {
        s[i++] = unsigned_n % 10 + '0';
    } while ((unsigned_n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    while (i < min_width)
        s[i++]  = ' ';
    s[i] = '\0';
    reverse(s, 0, i-1);
}

int main()
{
    char s[100];
    itoa(-19, s, 5);
    printf("%s\n", s);
    return 0;
}

