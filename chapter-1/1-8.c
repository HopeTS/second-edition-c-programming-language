#include <stdio.h>

/* Exercise 1-8: Write a program to count blanks, tabs and newlines */
main()
{
    int c, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blanks;
        }

        if (c == '\t')
        {
            ++tabs;
        }

        if (c == '\n')
        {
            ++newlines;
        }
    }

    printf("%d\n---\nThere are %d blanks, %d tabs and %d newlines in this input", c, blanks, tabs, newlines);
}