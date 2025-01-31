//write a program to find thr macimum subarray sum in an array in c.
#include<stdio.h>
int maxSubArraySum(int arr[], int n){
    int max = 0, current = 0;
    for (int i = 0; i < n; i++) {
        current += arr[i];
        if (current > max) {
            max = current;
        }
        if (current < 0) {
            current = 0;
        }
    }
    return max;
}
int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);   
    printf("Maximum subarray sum is %d", maxSubArraySum(arr, n));
    return 0;
}