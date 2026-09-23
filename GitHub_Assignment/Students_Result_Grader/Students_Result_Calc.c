#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mark;
    printf("WELCOME TO THE SIMPLE STUDENT MARK GRADER!");
    printf("\nEnter Marks for Test: ");
    scanf("%f", &mark);
    if (mark >= 0 && mark <= 100)
        {
            if (mark >= 50)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
        }


    return 0;
}
