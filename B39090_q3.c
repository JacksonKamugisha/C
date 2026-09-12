#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fsize, Ispeed;
    float Est_DTm, Est_DTs;
    printf("Enter file size (MB): ");
    scanf("%d", &fsize);
    printf("Enter internet speed (Mbps): ");
    scanf("%d", &Ispeed);
    Est_DTs = (fsize * 8)/Ispeed;
    Est_DTm = Est_DTs/60;
    printf("\nEstimated download time: %.2f seconds\nEstimated download time: %.2f minutes", Est_DTs, Est_DTm);
    return 0;
}
