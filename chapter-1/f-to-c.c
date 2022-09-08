#include <stdio.h>

/*
 * print Fahrenheit-Celsuis table for F = 0, 20, ..., 300
 */
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* Lower limit of temp. table */
    upper = 300; /* Upper limit of temp. table */
    step = 10;   /* Step size */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}