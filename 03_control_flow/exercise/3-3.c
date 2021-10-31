#include <stdio.h>

void expand(char s1[], char s2[])
{
    int i = 0, j = 0;
    char c;
    while (c = s1[i++]) {
        if (s1[i] == '-' && c <= s1[i+1]) {
            i++;
            while (c < s1[i])
                s2[j++] = c++;
         } else
            s2[j++] = c;
    }
    s2[j] = '\0';
}

int main()
{
    char s1[] = "a-ca-b";
    char s2[100];
    expand(s1, s2);
    printf("%s\n", s2);
    return 0;
}

