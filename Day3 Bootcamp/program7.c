//print N to 1
#include<stdio.h>
void ntoone(int n){
    if(n>0){
    printf("%d,",n);
    ntoone(n-1);
   }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    ntoone(n);
    return 0;
}