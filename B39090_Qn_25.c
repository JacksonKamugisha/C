#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, amount, balance;
    printf("Enter expected data requirement (GB): \n");
    scanf("%d", &data);
    printf("Enter available budget (UGX): \n");
    scanf("%d", &amount);
    if (amount < 10000)
    {
        printf("Insufficient funds.\n");
        printf("Please top up!\n");
    }
    else if (amount >= 10000 && amount < 25000)
    {
        printf("Recommended bundle: 5GB\n");
        printf("Bundle price: UGX 10000.00\n");
        printf("Budget is sufficient.\n");
        if (amount > 10000)
        balance = amount - 10000;
        printf("Balance after purchase: UGX %d\n", balance);
    }
    else if (amount >= 25000 && amount < 45000)
    {
        printf("Recommended bundle: 15GB\n");
        printf("Bundle price: UGX 25000.00\n");
        printf("Budget is sufficient.\n");
        if (amount > 25000)
        balance = amount - 25000;
        printf("Balance after purchase: UGX %d\n", balance);
    }
    else if (amount >= 45000)
    {
        printf("Recommended bundle: 30GB\n");
        printf("Bundle price: UGX 45000.00\n");
        printf("Budget is sufficient.\n");
        if (amount > 45000)
        balance = amount - 45000;
        printf("Balance after purchase: UGX %d\n", balance);
    }
    else
    {
        printf("Invalid input!");
    }

    return 0;
}
