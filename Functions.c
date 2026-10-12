#include <stdio.h>
#include <stdlib.h>

// MAKING A CHRISTMAS TREE!

void star()
{
    int widest = 5;
    for (int r = 1; r<=5; r++)
    {
        for (int s = 1; s<=widest - r; s++)
            printf(" ");

        for (int c=1;c<=3;c++)
            printf("#");
    }
}

void pyramid()
{
    int h = 4;
    for (int r; r <= h; r++)
    {
        for (int s=1; s<=h-r; s++)
            printf(" ");
        for (int c=1; c<=2*r-1; c++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

int main()
{
    // pyramid();
    // star();
    int h = 4;
    for (int r; r <= h; r++)
    {
        for (int s=1; s<=h-r; s++)
            printf(" ");
        for (int c=1; c<=2*r-1; c++)
            printf("*");
        printf("\n");
    }
    printf("\n");

    return 0;
}
