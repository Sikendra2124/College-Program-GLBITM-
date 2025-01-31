//write a program to find a subarray with a given sum using the sliding window technique in c.
#include<stdio.h>
int subArraySum(int arr[], int n, int sum){
    int current = arr[0], start = 0;
    for (int i = 1; i <= n; i++) {
        while (current > sum && start < i - 1) {
            current -= arr[start];
            start++;
        }
        if (current == sum) {
            printf("Sum found between indexes %d and %d", start, i - 1);
            return 1;
        }
        if (i < n) {
            current += arr[i];
        }
    }
    printf("No subarray found");
    return 0;
}   
int main(){
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}