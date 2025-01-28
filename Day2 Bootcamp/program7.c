#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three angles: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180){
        printf("The angles form a triangle.\n");
        if(a+b>c && a+c>b && b+c>a){
            printf("The triangle is valid.\n");
            if(a==90 || b==90 || c==90){
                printf("The triangle is a right triangle.\n");
            }
            else{
                printf("The triangle is not a right triangle.\n");
            }
        }
        else{
            printf("The triangle is invalid.\n");
        }
    }
}