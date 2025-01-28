#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is: %d",n,sum);
}