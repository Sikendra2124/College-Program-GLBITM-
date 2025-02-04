//write a program to find the only odd occuring number in an array where all other numbers occur even number of times.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int res = 0;
    for(int i=0; i<n; i++){
        res = res ^ arr[i];
    }
    printf("The only odd occuring number is %d\n", res);
    return 0;
}