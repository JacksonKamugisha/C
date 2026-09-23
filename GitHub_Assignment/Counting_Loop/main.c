#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    for(num = 1; num < 11; num++)
    {
    /*if (num != 5)
        {
            printf("%d\n", num);
        }*/
    /*if (num == 5)
    {
        continue;
    }*/
    /*if (num == 5)
    {
        break;
    }
    else
    {
        printf("%d\n", num);
    }*/
    if (num%2==0)
    {
        printf("%d\n", num);
    }
    else
    {
        continue;
    }
    }


    return 0;
}
