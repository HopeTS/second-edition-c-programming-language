#include <stdio.h>
#include <stdbool.h>

main()
{
    int x;
    bool tru;

    tru = true;
    while (tru == true)
    {
        x = getchar();
        putchar(x);
    }

    printf("no longer taking characters");
    return 0;
}