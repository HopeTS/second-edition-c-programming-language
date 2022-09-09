#include <stdio.h>

/* version 1 of count characters function */
version1()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }

    printf("%ld\n", nc);
}

main()
{
    version1();
}