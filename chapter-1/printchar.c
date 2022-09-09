#include <stdio.h>

main()
{
    int x;
    while (true)
    {
        x = getchar();
        putchar(x);
    }

    printf("no longer taking characters");
    return 0;
}