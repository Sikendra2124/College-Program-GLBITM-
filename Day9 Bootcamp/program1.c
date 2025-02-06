//write a program to print the transpose of a matrix.
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

printf("_______________________________");

for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;

}