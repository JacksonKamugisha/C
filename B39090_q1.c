#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ava, trips_fare, remainder;
    int  fare, trips;
    printf("How much money is available: ");
    scanf("%f", &ava);
    printf("How much is for one trip: ");
    scanf("%d", &fare);
    printf("How many trips: ");
    scanf("%d", &trips);
    trips_fare = trips * fare;
    remainder = ava - trips_fare;
    printf("\nStarting amount was %.2f.\n%.2f will be the total amount used.\n%.2f will be the balance.", ava, trips_fare, remainder);
    return 0;
}
