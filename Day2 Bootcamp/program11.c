#include<stdio.h>
int main(){
    int n,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
        count++;
        // sum=sum+n;
    }
    printf("The number of digits in the number is: %d",count);
    printf("The sum of the digits in the number is: %d",sum);
}