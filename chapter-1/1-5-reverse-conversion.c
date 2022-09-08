#include <stdio.h>

/** Reverse Print Fahrenheit-Celsius table */
main()
{
    int lower, upper, step;

    lower = 0;   /* Lower F limit */
    upper = 300; /* Upper F limit */
    step = 10;   /* Step size */

    printf("Fahrenheit to Celsius conversion table\n");
    for (int fahr = upper; fahr >= lower; fahr = fahr - step)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}