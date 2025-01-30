//program to find leaders in an array.
#include<stdio.h>
int main(){
    int a[100], n, i, j, max, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i=0; i<n; i++){
        if(a[i]>=max){
            max = a[i];
            count++;
        }
    }
    printf("The leaders in the array are: ");
    for(i=0; i<n; i++){
        if(a[i] == max){
            printf("%d ", a[i]);
            max = a[i-1];
        }
    }
    return 0;
}