#include <stdio.h>

main()
{
    int c;

    c = getchar();
    putchar(c);
    printf("%d <- this is the print statement", c);
    return 0;
}