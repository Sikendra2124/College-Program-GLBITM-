//write a program to find the equilibrium point in c.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++) {
        int left_sum = prefix[i] - arr[i];
        int right_sum = prefix[n - 1] - prefix[i];
        if (left_sum == right_sum) {
            printf("Equilibrium point found at index %d\n", i);
            return 0;
        }
    }

    printf("No equilibrium point found\n");
    return 0;
}