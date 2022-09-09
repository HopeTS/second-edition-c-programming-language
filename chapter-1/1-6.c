#include <stdio.h>

main()
{
    int c;

    printf("%d this is EOF\n", EOF);

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
        printf("\n c is now %d\n", c)
    }

    /*     c = getchar();
        putchar(c); */
    printf("%d <- this is the print statement\n", c);
    return 0;
}