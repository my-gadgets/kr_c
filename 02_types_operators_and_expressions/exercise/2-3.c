#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int htoi(char s[])
{
    int res = 0;
    int base = 16;
    int cur = 0;
    for (int i = 0; s[i]; ++i) {
        if ((i == 0 && s[i] == '0') || s[i] == 'x' || s[i] == 'X')
            continue;
        if (isdigit(s[i]))
            cur = s[i] - '0';
        else if (isupper(s[i]))
            cur = s[i] - 'A' + 10;
        else if (islower(s[i]))
            cur = s[i] - 'a' + 10;
        res = res * base + cur;
    }
    return res;
}

int main()
{
    char s1[] = "0X1F";
    printf("%s %d\n", s1, htoi(s1));

    char s2[] = "0x2F";
    printf("%s %d\n", s2, htoi(s2));

    char s3[] = "2e";
    printf("%s %d\n", "2e", htoi(s3));

    return 0;
}
