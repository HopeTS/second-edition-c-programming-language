#include <stdio.h>

main()
{
    char x;
    while (x != "z")
    {
        x = getchar();
        putchar(x);
    }

    printf("no longer taking characters");
}