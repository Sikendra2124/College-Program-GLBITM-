//write a program to reverse an array.
#include<stdio.h>
int main(){
    int a[10], n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Array elements before reversing: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=0, j=n-1; i<j; i++, j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("Array elements after reversing: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}