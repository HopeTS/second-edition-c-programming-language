#include <stdio.h>

main()
{
    int c;

    printf("%d this is EOF", EOF);

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    /*     c = getchar();
        putchar(c); */
    printf("%d <- this is the print statement\n", c);
    return 0;
}