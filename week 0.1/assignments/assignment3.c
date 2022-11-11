#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int P;
    float R,n,SI;
    printf("Enter Principal Amount (p): ");
    scanf("%d",&P);
    printf("Enter intrest rate (r): ");
    scanf("%f",&R);
    printf("Enter number of years (n): ");
    scanf("%f",&n);
    SI = P*R*n/100;
    printf("Simple Intrest (SI) is: %f",SI);

    return EXIT_SUCCESS;
}