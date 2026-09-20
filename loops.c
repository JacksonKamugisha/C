#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    // for loops
    for(i = 0; i < 8; i++) // Don't use > / ==, that's an error since its false off the bat!
        // Post increment (i++) adds first, then executes.
    {
        printf("For_num = %d\n", i);
    }

    int num = 0;
    // while loops
    while (num<8)
    {
        printf("while_num = %d\n", num);
        ++num;
    }

    int num2 = 0;
    // do while loops
    do
    {
        printf("while_num2 = %d\n", num2);
        ++num2;
    }while (num2<8);
return 0;
}
