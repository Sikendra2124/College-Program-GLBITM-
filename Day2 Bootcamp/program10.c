//prime number 
#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            c++;
         }
    }
    if(c==2){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
}