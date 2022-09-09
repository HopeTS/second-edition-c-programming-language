#include <stdio.h>

#define LOWER 0   /* Lower F limit */
#define UPPER 300 /* Upper F limit */
#define STEP 10   /* Step size */

/** Reverse Print Fahrenheit-Celsius table */
main()
{
    printf("Fahrenheit to Celsius conversion table\n");
    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}