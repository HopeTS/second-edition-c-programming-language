#include <stdio.h>

main()
{
    int x;
    while (TRUE)
    {
        x = getchar();
        putchar(x);
    }

    printf("no longer taking characters");
    return 0;
}