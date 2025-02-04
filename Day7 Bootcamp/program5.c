//write a program to find two odd occuring numbers.
#include <stdio.h>
int oddOccuring(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int res = oddOccuring(arr, n);
    int setBit = res & ~(res-1);
    int x = 0, y = 0;
    for(int i=0; i<n; i++){
        if(arr[i] & setBit){
            x = x ^ arr[i];
        }else{
            y = y ^ arr[i];
        }
    }
    printf("The two odd occuring numbers are %d and %d\n", x, y);
    return 0;
}