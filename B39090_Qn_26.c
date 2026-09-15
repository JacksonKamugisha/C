#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c_mark, e_mark, total_mark;
    printf("Enter coursework mark (0 - 40): ");
    scanf("%d", &c_mark);
    printf("Enter examination mark (0 - 60): ");
    scanf("%d", &e_mark);
    if (c_mark < 0 && c_mark > 40 && e_mark < 0 && e_mark > 60)
    {
        printf("Invalid mark entered.\n");
    }
    else if (c_mark >= 0 && c_mark <= 40 && e_mark >= 0 && e_mark <= 60)
    {
        printf("Valid Input!\n");
        total_mark = c_mark + e_mark;
        printf("Total Mark: %d\n", total_mark);
        if (total_mark >= 75 && e_mark >= 35)
        {
            printf("Result: Distinction\n");
        }
        else if (total_mark >= 50 && e_mark >= 25)
        {
            printf("Result: Pass\n");
        }
        else
        {
            printf("Result: Fail\n");
        }
    }
    else
    {
        printf("Invalid Input!\n");
    }

    return 0;
}
