#include <stdio.h>

main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
        printf("%d is c end of file: %d\n", c, (c == EOF));
    }
    return 0;
}