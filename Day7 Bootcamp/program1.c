//write a program to check if the kth bit is set or not.
#include <stdio.h>
int main()
{
    int n, k;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the bit position: ");
    scanf("%d", &k);
    if (n & (1 << (k-1)))
    {
        printf("The %dth bit is set\n", k);
    }
    else
    {
        printf("The %dth bit is not set\n", k);
    }
    return 0;
}