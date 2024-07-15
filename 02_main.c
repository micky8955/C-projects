#include <stdio.h>

int main()
{
    int p;
    float r;
    float t;
    // Taking input principal amount 
    printf("Enter a principal amount in dollars: $");
    scanf("%d", &p);
    // Taking input rate of interest 
    printf("Enter a rate of interest (as a decimal, e.g., 0.05 for 5%%): ");
    scanf("%f", &r);
    // Taking input time 
    printf("Enter a time in years: ");
    scanf("%f", &t);

    printf("The interest rate of the given amount is: $%.3f\n", p * r * t);

    return 0;
}
