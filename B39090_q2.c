#include <stdio.h>
#include <stdlib.h>

int main()
{
   int bw, bwcost, c, ccost;
   float bwTCost, cTCost, total;
   printf("Enter number of black-and-white pages: ");
   scanf("%d", &bw);
   printf("Enter cost per black-and-white page (UGX): ");
   scanf("%d", &bwcost);
   printf("Enter number of color pages: ");
   scanf("%d", &c);
   printf("Enter the cost per color page (UGX): ");
   scanf("%d", &ccost);
   cTCost = c * ccost;
   bwTCost = bw * bwcost;
   total = bwTCost + cTCost;
   printf("\nBlack-and-white printing cost: UGX %.2f\nColor printing cost: UGX %.2f\nTotal printing cost: UGX %.2f", bwTCost, cTCost, total);
   return 0;
}
