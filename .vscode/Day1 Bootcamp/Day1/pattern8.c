#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        for(int s=i; s<n; s++){
            printf("=");
        }
        for(int j=1; j<=i*2-1; j++){
            if (j==1 || j==i*2-1 || i == n)
            {
                printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}