//sum of digits of a number
#include<stdio.h>
int sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
        }
        return sum;
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum of the digits=%d",sum(n));
}