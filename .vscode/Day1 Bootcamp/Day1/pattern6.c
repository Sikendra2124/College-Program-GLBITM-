#include<stdio.h>
void main(){
    int rows=5;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=rows-i;j++){
            printf(" ");
    }
    for(int j=1;j<=(2*i-1);j++){
        printf("*");
    }
    printf("\n");
}
}