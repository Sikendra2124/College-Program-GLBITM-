//print 1 to N
#include<stdio.h>
void oneton(int n){
    if(n>0){
    oneton(n-1);
    printf("%d,",n);
   }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    oneton(n);
    printf("\n");
    return 0;
}