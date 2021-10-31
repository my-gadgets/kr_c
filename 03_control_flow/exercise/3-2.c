#include <stdio.h>

void escape(char s[], char t[])
{
    int ps = 0, pt = 0;
    while(t[pt]) {
        switch (t[pt]) {
        case '\t':
            s[ps++] = '\\';
            s[ps++] = 't';
            break;
        case '\n':
            s[ps++] = '\\';
            s[ps++] = 'n';
            break;
        default:
            s[ps++] = t[pt];
        }
        ++pt;
    }
    s[ps] = '\0';
}

void unescape(char s[], char t[])
{
    int ps = 0, pt = 0;
    while (t[pt]) {
        if (t[pt] != '\\')
            s[ps++] = t[pt];
        else
            switch (t[++pt]) {
            case 'n':
                s[ps++] = '\n';
                break;
            case 't':
                s[ps++] = '\t';
                break;
            }
        ++pt;
    }
    s[ps] = '\0';
}

int main()
{
    char t[] = "I\tam\tsiria\n";
    char s[100];
    escape(s, t);
    printf("%s", s);
    char res2[100];
    unescape(res2, s);
    printf("%s", res2);
    return 0;
}

