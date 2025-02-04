//write a program to count set bits.
#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    printf("The number of set bits is %d\n",count);
    return 0;
}