//write a program to check if an array is sorted.
#include<stdio.h>
int main(){
    int a[100], n, i, sorted = 1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=1; i<n; i++){
        if(a[i]<a[i-1]){
            sorted = 0;
            break;
        }
    }
    if(sorted){
        printf("The array is sorted.");
    }
    else{
        printf("The array is not sorted.");
    }
    return 0;
}