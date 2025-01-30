//program to find maximum difference between two elements in an array.
#include<stdio.h>
int main(){
    int a[100], n, i, j, maxdiff = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[j]-a[i]>maxdiff){
                maxdiff = a[j]-a[i];
            }
        }
    }
    printf("The maximum difference between two elements in the array is: %d", maxdiff);
    return 0;
}