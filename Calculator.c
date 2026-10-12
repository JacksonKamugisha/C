#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int output;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int multiply(int a, int b)
{
    int multiplying = a * b;
    return multiplying;
}

int subtract(int a, int b)
{
    int subtraction = a - b;
    return subtraction;
}

int division(int a, int b)
{
    int divide = a / b;
    return divide;
}

int main()
{
    int first, second, choice;
    printf("\nWelcome to my simple calculator!\n");
    bool loop = true;
    while(loop)
    {
        printf("To begin, enter your two numbers\n");
        printf("This calculator only reads integers, so keep that in mind!\n");
        printf("Enter 1st number here: ");
        scanf("%d", &first);
        printf("\nEnter 2nd number here: ");
        scanf("%d", &second);
        printf("\nNow you need to choose what you want to do with your numbers.\n");
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            output = add(first, second);
            printf("\n%d + %d = %d\n", first, second, output);
            break;

        case 2:
            output = subtract(first, second);
            printf("\n%d - %d = %d\n", first, second, output);
            break;

        case 3:
            output = multiply(first, second);
            printf("\n%d * %d = %d\n", first, second, output);
            break;

        case 4:
            output = division(first, second);
            printf("\n%d / %d = %d\n", first, second, output);
            break;

        case 5:
            loop = false;
            break;

        default:
            printf("\nSYNTAX ERROR\n");
        }
    }


    return 0;
}
