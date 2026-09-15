#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, quantity, sub_total, discount;
    printf("1. Chapati and Beans - UGX 4000\n");
    printf("2. Rice and Chicken - UGX 12000\n");
    printf("3. Rolex - UGX 6000\n");
    printf("4. Fresh Juice - UGX 5000\n");
    printf("\n");
    printf("Enter menu choice: \n");
    scanf("%d", &choice);
    printf("Enter quantity: \n");
    scanf("%d", &quantity);
    if (quantity <= 0)
    {
        printf("Invalid Quantity.\n");
    }
    else
    {
        switch (choice)
        {
        case 1:
        printf("Item: Chapati and Beans\n");
        printf("Unit Price: UGX 4000.00\n");
        printf("Quantity: %d\n", quantity);
        choice = 4000;
        sub_total = quantity * choice;
        printf("Subtotal: UGX %d.00\n", sub_total);
        if (sub_total > 50000)
         {
            discount = sub_total * 0.05;
            printf("Discount: UGX %d.00\n", discount);
            sub_total -= (sub_total * 0.05);
            printf("Amount payable: UGX %d.00\n", sub_total);
        }
        else
            {
            printf("Amount payable: UGX %d.00\n", sub_total);
            }
        break;

        case 2:
        printf("Item: Rice and Chicken\n");
        printf("Unit Price: UGX 12000.00\n");
        printf("Quantity: %d\n", quantity);
        choice = 12000;
        sub_total = quantity * choice;
        printf("Subtotal: UGX %d.00\n", sub_total);
        if (sub_total > 50000)
         {
            discount = sub_total * 0.05;
            printf("Discount: UGX %d.00\n", discount);
            sub_total -= (sub_total * 0.05);
            printf("Amount payable: UGX %d.00\n", sub_total);
        }
        else
            {
            printf("Amount payable: UGX %d.00\n", sub_total);
            }
        break;

        case 3:
        printf("Item: Rolex\n");
        printf("Unit Price: UGX 6000.00\n");
        printf("Quantity: %d\n", quantity);
        choice = 6000;
        sub_total = quantity * choice;
        printf("Subtotal: UGX %d.00\n", sub_total);
        if (sub_total > 50000)
         {
            discount = sub_total * 0.05;
            printf("Discount: UGX %d.00\n", discount);
            sub_total -= (sub_total * 0.05);
            printf("Amount payable: UGX %d.00\n", sub_total);
        }
        else
            {
            printf("Amount payable: UGX %d.00\n", sub_total);
            }
        break;

        case 4:
        printf("Item: Fresh Juice\n");
        printf("Unit Price: UGX 5000.00\n");
        printf("Quantity: %d\n", quantity);
        choice = 5000;
        sub_total = quantity * choice;
        printf("Subtotal: UGX %d.00\n", sub_total);
        if (sub_total > 50000)
         {
            discount = sub_total * 0.05;
            printf("Discount: UGX %d.00\n", discount);
            sub_total -= (sub_total * 0.05);
            printf("Amount payable: UGX %d.00\n", sub_total);
        }
        else
            {
            printf("Amount payable: UGX %d.00\n", sub_total);
            }
        break;

        default:
        printf("Invalid Menu Choice.");
        }
    }


    return 0;
}
