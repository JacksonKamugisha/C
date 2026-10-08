#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int choice;
float i, j;

float Area(float i, float j);
void switch_1();
void switch_2();
void switch_3();

int main()
{
    float width, length;
    printf("What is the length?\n");
    scanf("%f", &length);
    printf("What is the width?\n");
    scanf("%f", &width);
    float output = Area(length, width);
    printf("\nThe area is %.2f\n", output);
    // switch_1();

    return 0;
}

float Area(float i, float j)
{
    // float len, wid, area;
    // printf("What is the length?\n");
    // scanf("%f", &len);
    // printf("What is the width?\n");
    // scanf("%f", &wid);
    // area = len * wid;
    float area = i * j;
    return area;
}

void switch_2()
{
    printf("\nRange is only 1\n");
    printf("ENTER: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("This is the second switch!!\n");
        break;
    default:
        printf("This shouldn't have happened ':-('\n");
    }
}

void switch_3()
{
    bool decision = true;
    while(decision)
    {
        printf("\nRange is 0, 1, 2\n");
        printf("\nPress 0 to exit\n");
        printf("ENTER: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 0:
            decision = false;
        case 1:
            printf("\nKeep going!\n");
            break;
        case 2:
            printf("\nDon't stop!\n");
            break;
        default:
            printf("This shouldn't have happened ':-('\n");
        }
    }
}

void switch_1()
{
    printf("\nRange is 1, 2, 3\n");
    printf("\nENTER: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("This should work!\n");
        break;
    case 2:
        printf("Let's move on to the second switch\n");
        switch_2();
        break;
    case 3:
        printf("Lets make it into a loop!\n");
        switch_3();
        break;
    default:
        printf("This shouldn't have happened ':-('\n");
    }

}
