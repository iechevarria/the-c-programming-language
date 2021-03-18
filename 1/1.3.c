#include <stdio.h>

main()
{
    float fahr, celsius;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    printf("Fahrenheit   Celsius\n");
    while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr-32.0);
	printf("%10.0f %9.1f\n", fahr, celsius);
	fahr = fahr + step;
    }
}
