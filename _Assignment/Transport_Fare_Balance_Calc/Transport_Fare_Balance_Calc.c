#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("WELCOME TO THE SIMPLE TRANSPORT BALANCE CALCULATOR\n");


    int fare, Sbalance, Fbalance;
    printf("\nStarting Balance: ");
    scanf("%d", &Sbalance);
    printf("\nTransport Fare: ");
    scanf("%d", &fare);
    Fbalance = Sbalance - fare;
    if (Sbalance > fare)
    {
        printf("\nYour final balance is UGX %d\n", Fbalance);
    }
    else if (Sbalance < fare)
    {
        printf("Insufficient amount\n");
    }
    else
        {
            printf("Invalid Input!");
        }

    return 0;
}
