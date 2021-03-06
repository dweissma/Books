#include <stdio.h>

/* print the Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; //Lower bound
    upper = 300; //Upper bound
    step = 20; //Step size

    fahr = lower;
    printf("Fahr  Cels\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
