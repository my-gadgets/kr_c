#include <stdio.h>

int any(char s1[], char s2[])
{
    for (int p1 = 0; s1[p1]; ++p1)
        for (int p2 = 0; s2[p2]; ++p2) {
            if (s1[p1] == s2[p2])
                return p1;
        }
    return -1;
}

int main()
{
    char s1[] = "I am siria";
    char s2[] = "xxxse";
    printf("%d\n", any(s1, s2));
    return 0;
}

