#include <stdio.h>

#define NEWLINE 120

main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == NEWLINE)
        {
            ++nl;
        }
    }

    printf("%d lines\n", nl);
}