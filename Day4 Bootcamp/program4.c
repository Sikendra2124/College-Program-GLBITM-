//write a program to remove all duplicate elements from an array.
#include<stdio.h>
int main(){
    int arr[10], i, j, n, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                for(temp=j; temp<n; temp++){
                    arr[temp] = arr[temp+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array elements after removing duplicates: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}