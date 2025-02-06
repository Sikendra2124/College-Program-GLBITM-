//Write a program to print boundary elements of a matrix.
#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    printf("enter elements:");
    for(i=0;i<3;i++){
     for(j=0;j<3;j++){
         scanf("%d",&arr[i][j]);
     }
    }

    printf("the matrix is:\n");
    for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("%d ",arr[i][j]);
         }
         printf("\n");
     }
     printf("boundary elements of the matrix are:\n");
     for(i=0;i<3;i++){
        printf("%d ",arr[i][0]);
        }
        for(i=1;i<3;i++){
            printf("%d ",arr[2][i]);
        }
        for(i=1;i>=0;i--){
            printf("%d ",arr[i][2]);
        }
        for(i=1;i<3;i++){
            printf("%d ",arr[0][i]);
        }
    return 0;
}
