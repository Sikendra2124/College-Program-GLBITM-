//find power of two using recursion.
#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
    return 1;
    else
    return a*power(a,b-1);
}

int main(){
    int a,b;
    printf("Enter the base number: ");
    scanf("%d",&a);
    printf("Enter the exponent: ");
    scanf("%d",&b);
    printf("The result is: %d",power(a,b));
    return 0;
}