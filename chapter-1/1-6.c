#include <stdio.h>

main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
        printf("is c end of file: %d", c == EOF);
    }
    return 0;
}