#include<stdio.h>
void main(){
    //char ch='A';
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
}