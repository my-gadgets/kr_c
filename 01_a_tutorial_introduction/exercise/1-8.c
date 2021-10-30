#include <stdio.h>

int main()
{
    int c;
    int nb= 0, nt= 0, nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    printf("number of blanks: %d\n", nb);
    printf("number of tabs: %d\n", nt);
    printf("number of newlines: %d\n", nl);

    return 0;
}

