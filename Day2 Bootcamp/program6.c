#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three angles:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180){
        printf("trinagle is valid");
        if (a+b==c){
            printf("it is a right triangle");
        }
        else{
            printf("it is not a right triangle");
        }
    }
    return 0;
}