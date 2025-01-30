//write a program to find the second largest element in an array.
#include<stdio.h>
int main(){
    int a[100], n, i, max, secmax;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    secmax = a[0];
    for(i=1; i<n; i++){
        if(a[i]>max){
            secmax = max;
            max = a[i];
        }
        else if(a[i]>secmax && a[i]!=max){
            secmax = a[i];
        }
    }
    printf("The second largest element in the array is: %d", secmax);
    return 0;
}