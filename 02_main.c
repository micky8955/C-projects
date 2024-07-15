// #include <stdio.h>

// int main()
// {
//     int p;
//     float r;
//     float t;

//     printf("Enter a principle ammount = ");
//     scanf("%d", &p);

//     printf("Enter a rate of interest = ");
//     scanf("%f", &r);

//     printf("Enter a time = ");
//     scanf("%f", &t);

//     printf("The interest rate of given ammount is = %f $", p * r * t);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int p;
    float r;
    float t;

    printf("Enter a principal amount in dollars: $");
    scanf("%d", &p);

    printf("Enter a rate of interest (as a decimal, e.g., 0.05 for 5%%): ");
    scanf("%f", &r);

    printf("Enter a time in years: ");
    scanf("%f", &t);

    printf("The interest rate of the given amount is: $%.3f\n", p * r * t);

    return 0;
}
