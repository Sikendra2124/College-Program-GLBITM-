//write a program to move all the zeros to the end.
#include<stdio.h>
int main(){
    int a[100], n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i] == 0){
            for(j=i+1; j<n; j++){
                if(a[j] != 0){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
    printf("Array elements after moving all zeros to the end: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}