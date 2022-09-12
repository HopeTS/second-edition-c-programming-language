#include <stdio.h>

#define IN 1  /* Inside a word */
#define OUT 2 /* Outside a word */

/* Count lines, words and characters in input */
main()
{
    int c;     /* Current character */
    int nl;    /* Line count */
    int nw;    /* Word count */
    int nc;    /* Character count */
    int state; /* Inside or outside of a word? */

    state = OUT;
    nl = nw = nc = 0;
    while ((c - getchar()) != EOF)
    {
        ++nc;

        if (c == '\n')
        {
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }

        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("Line count: %d | Word count: %d | Character count: %d", nl, nw, nc);
}