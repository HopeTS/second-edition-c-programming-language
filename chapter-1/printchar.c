#include <stdio.h>

main()
{
    char x;
    char terminate = "z";
    while (x != terminate)
    {
        x = getchar();
        putchar(x);
    }

    printf("no longer taking characters");
}