//write a program to find the sum of any subarray using the prefix sum array in c.
#include <stdio.h>

int subArraySum(int arr[], int n, int sum) {
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int current_sum = prefix[j] - prefix[i] + arr[i];
            if (current_sum == sum) {
                printf("Sum found between indexes %d and %d\n", i, j);
                return 1;
            }
        }
    }
    printf("No subarray found\n");
    return 0;
}

int main() {
    int n, sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum to find: ");
    scanf("%d", &sum);

    subArraySum(arr, n, sum);

    return 0;
}