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

/* version 2 of count characters function */
version2()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
    {
        printf("%.0f\n", nc);
    }
}

main()
{
}