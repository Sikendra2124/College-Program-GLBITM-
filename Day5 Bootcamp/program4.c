//write a program to find the maximum and minimum sum of subarray of size k in an array in c.
#include<stdio.h>
int maxSubArraySum(int arr[], int n, int k){
    int max = 0, current = 0;
    for (int i = 0; i < k; i++) {
        current += arr[i];
    }
    max = current;
    for (int i = k; i < n; i++) {
        current += arr[i] - arr[i - k];
        if (current > max) {
            max = current;
        }
    }
    return max;
}   
int minSubArraySum(int arr[], int n, int k){
    int min = 0, current = 0;
    for (int i = 0; i < k; i++) {
        current += arr[i];
    }
    min = current;
    for (int i = k; i < n; i++) {
        current += arr[i] - arr[i - k];
        if (current < min) {
            min = current;
        }
    }
    return min;
}
int main(){
    int arr[] = {10, 4, 2, 5, 6, 3, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printf("Maximum sum of subarray of size %d is %d\n", k, maxSubArraySum(arr, n, k));
    printf("Minimum sum of subarray of size %d is %d", k, minSubArraySum(arr, n, k));
    return 0;
}