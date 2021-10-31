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

void itob(int n, char s[], int b)
{
    unsigned unsigned_n;
    int sign;
    if ((sign = n) < 0)
        unsigned_n = -n;
    else
        unsigned_n = n;

    int i = 0;
    int mod = 0;
    do {
        mod = unsigned_n % b;
        s[i++] = mod <= 9 ? mod + '0' : mod - 10 + 'a';
    } while ((unsigned_n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s, 0, i-1);
}

int main()
{
    char s[100];
    itob(17, s, 16);
    printf("%s\n", s);
    return 0;
}

