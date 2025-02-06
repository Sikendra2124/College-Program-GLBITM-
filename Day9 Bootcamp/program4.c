//Write a program to perform spiral traversal of a matrix.
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
     printf("spiral traversal of the matrix is:\n");
     int top=0,bottom=2,left=0,right=2;
     while(top<=bottom && left<=right){
         for(i=left;i<=right;i++){
             printf("%d ",arr[top][i]);
         }
         top++;
         for(i=top;i<=bottom;i++){
             printf("%d ",arr[i][right]);
         }
         right--;
         for(i=right;i>=left;i--){
             printf("%d ",arr[bottom][i]);
         }
         bottom--;
         for(i=bottom;i>=top;i--){
             printf("%d ",arr[i][left]);
         }
         left++;
     }
    return 0;
}
//leetcode 59


// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j;
//     printf("enter elements:");
//     for(i=0;i<3;i++){
//      for(j=0;j<3;j++){
//          scanf("%d",&arr[i][j]);
//      }
//     }

//     printf("the matrix is:\n");
//     for(i=0;i<3;i++){
//          for(j=0;j<3;j++){
//              printf("%d ",arr[i][j]);
//          }
//          printf("\n");
//      }

//         printf("spiral elements are:");
//         for(i)

