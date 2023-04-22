// Q.3 The temperature can be measured in either Celsius or Fahrenheit. Let us say that an user is
// measuring the temperature in Celsius and he wants to know the equivalent Fahrenheit measurement.
// Write a program to achieve this functionality.
// The formula is F = (temp_in_Celcius * 9/5) +32
#include <stdio.h>
#include <math.h>
int main()
{
    float temp_in_celsius;
    float fahrenheit;

    printf("Enter the temperature in Celsius ");
    scanf("%f", &temp_in_celsius);

    fahrenheit = (temp_in_celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit is %f", fahrenheit);
    return 0;
}