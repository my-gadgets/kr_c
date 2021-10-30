#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int p1 = 0;
    int e1 = 0;
    int match = 0;
    while (s1[p1]) {
        match = 0;
        for (int i = 0; s2[i]; ++i)
            if (s1[p1] == s2[i]) {
                match = 1;
                break;
            }
        if (match)
            ++p1;
        else
            s1[e1++] = s1[p1++];
    }
    s1[e1] = '\0';
}

int main()
{
    char s1[] = "I am siria";
    char s2[] = "ai";
    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}

