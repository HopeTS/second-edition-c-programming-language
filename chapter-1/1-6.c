#include <stdio.h>

/* Print the value of each input character, and whether or not it is equal to EOF (end of file) */
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