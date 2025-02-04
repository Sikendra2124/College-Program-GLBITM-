//write a program to check if a number is power of 2 or not.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n && !(n & (n-1))){
        printf("The number is a power of 2\n");
    }
    else{
        printf("The number is not a power of 2\n");
    }
    return 0;
}