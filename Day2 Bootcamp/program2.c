#include<stdio.h>
int main(){
    int a=5,b=6,c=2;
    int greatest=c>(a>b?a:b)?c:((a>b)?a:b);
    printf("%d",greatest);
    return 0;
}