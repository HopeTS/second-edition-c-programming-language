#include <stdio.h>

/* Print fahrenheit-Celsius table */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* Lower limit of temp. table 8 */
    upper = 300; /* Upper limit 8 */
    step = 10;   /* Step size */

    fahr = lower;
    printf("Fahrenheit to Celsius conversion table\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}