#include <stdio.h>

// This program converts temperatures between Celsius, Fahrenheit, and Kelvin.

int main()
{
    printf("\t\t\t\t\tCONVERSION OF TEMPERATURE SCALE\t\t\t\t\t\n");

    char currentScale, desiredScale;
    float celsius, kelvin, fahrenheit;

    // Prompt the user to enter the current temperature scale
    printf("Please enter \"f\" for Fahrenheit, \"c\" for Celsius, and \"k\" for Kelvin for the current temperature: \n");
    scanf(" %c", &currentScale);

    // Prompt the user to enter the desired temperature scale for conversion
    printf("Please enter \"f\" for Fahrenheit, \"c\" for Celsius, and \"k\" for Kelvin for the conversion scale: \n");
    scanf(" %c", &desiredScale);

    // Convert from Celsius
    if (currentScale == 'c')
    {
        if (desiredScale == 'f')
        {
            printf("Enter temperature in Celsius: \n");
            scanf("%f", &celsius);
            printf("Temperature in Fahrenheit: %.2f\n", (celsius * 9 / 5) + 32);
        }
        else if (desiredScale == 'k')
        {
            printf("Enter temperature in Celsius: \n");
            scanf("%f", &celsius);
            printf("Temperature in Kelvin: %.2f\n", celsius + 273.15);
        }
    }
    // Convert from Fahrenheit
    else if (currentScale == 'f')
    {
        if (desiredScale == 'c')
        {
            printf("Enter temperature in Fahrenheit: \n");
            scanf("%f", &fahrenheit);
            printf("Temperature in Celsius: %.2f\n", (fahrenheit - 32) * 5 / 9);
        }
        else if (desiredScale == 'k')
        {
            printf("Enter temperature in Fahrenheit: \n");
            scanf("%f", &fahrenheit);
            printf("Temperature in Kelvin: %.2f\n", (fahrenheit - 32) * 5 / 9 + 273.15);
        }
    }
    // Convert from Kelvin
    else if (currentScale == 'k')
    {
        if (desiredScale == 'c')
        {
            printf("Enter temperature in Kelvin: \n");
            scanf("%f", &kelvin);
            printf("Temperature in Celsius: %.2f\n", kelvin - 273.15);
        }
        else if (desiredScale == 'f')
        {
            printf("Enter temperature in Kelvin: \n");
            scanf("%f", &kelvin);
            printf("Temperature in Fahrenheit: %.2f\n", (kelvin - 273.15) * 9 / 5 + 32);
        }
    }
    else
    {
        printf("Please enter one of the mentioned characters.\n");
    }

    printf("\t\t\tThanks!\t\t\t\n");

    return 0;
}
