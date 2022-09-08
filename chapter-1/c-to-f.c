#include <stdio.h>

/** Print Celsius-Fahrenheit table */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* Lower C limit */
    upper = 300; /* Upper C limit */
    step = 10;   /* Step size */

    celsius = lower;
    printf("Celsius to Fahrenheit conversion table\n");
    while (celsius <= upper)
    {
        fahr = (celsius / (5.0 / 9.0)) + 32;
        printf("%3.0f\t%3.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}