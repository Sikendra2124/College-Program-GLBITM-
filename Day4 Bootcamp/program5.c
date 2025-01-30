//write a program to left rotate an array by d places
#include<stdio.h>
int main(){
    int a[100], n, d, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number of places to rotate the array by: ");
    scanf("%d", &d);
    for(i=0; i<d; i++){
        int temp = a[0];
        for(j=0; j<n-1; j++){
            a[j] = a[j+1];
        }
        a[n-1] = temp;
    }
    printf("Array elements after rotating by %d places: ", d);
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
    }
