#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float num1, num2;
    float result;
    printf("Enter your choice:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Length Conversion\n6. Weight Conversion\n7. Area Conversion\n8. Temperature Conversion\n9. USD to INR Conversion\n10. CAD to INR Conversion\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %f", result);
            break;
        case 2:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %f", result);
            break;
        case 3:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %f", result);
            break;
        case 4:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            if(num2 == 0)
                printf("Division by zero error.");
            else
                result = num1 / num2;
                printf("Result = %f", result);
                break;
        case 5:
            printf("Enter length in centimeters:\n");
            scanf("%f", &num1);
            result = num1 / 100;
            printf("Length in meters = %f", result);
            break;
        case 6:
            printf("Enter weight in grams:\n");
            scanf("%f", &num1);
            result = num1 / 1000;
            printf("Weight in kilograms = %f", result);
            break;
        case 7:
            printf("Enter area in square meters:\n");
            scanf("%f", &num1);
            result = num1 * 10.764;
            printf("Area in square feet = %f", result);
            break;
        case 8:
            printf("Enter temperature in Celsius:\n");
            scanf("%f", &num1);
            result = (num1 * 9/5) + 32;
            printf("Temperature in Fahrenheit = %f", result);
            break;
        case 9:
            printf("Enter amount in USD:\n");
            scanf("%f", &num1);
            result = num1 * 74.23; // as of April 25th, 2023
            printf("Amount in INR = %f", result);
        case 10:
             printf("Enter amount in CAD:\n");
             scanf("%f",&num1);
             result=num1*60.12; // as of April 25th,2023
             printf("\nAmount in INR=Rs.%0.2lf",result); 
             break; 
        default:
             printf("\nInvalid Choice"); 
             break; 
    }
    return 0;
}