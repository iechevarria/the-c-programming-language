#include <stdio.h>

main()
{
    float fahr, celsius;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    printf("Celsius   Fahrenheit\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%7.1f %12.0f\n", celsius, fahr);
        fahr = fahr + step;
    }
}
