#include <stdio.h>

void productExceptSelf(int nums[], int n, int result[]) {
    int left[n], right[n];

    // Initialize left and right arrays
    left[0] = 1;
    right[n - 1] = 1;

    // Fill left array
    for (int i = 1; i < n; i++) {
        left[i] = nums[i - 1] * left[i - 1];
    }

    // Fill right array
    for (int i = n - 2; i >= 0; i--) {
        right[i] = nums[i + 1] * right[i + 1];
    }

    // Fill result array
    for (int i = 0; i < n; i++) {
        result[i] = left[i] * right[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result[n];

    productExceptSelf(nums, n, result);

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

// leetcode 162
// Leetcode 852
// Leetcode 1901
// Leetcode 2951
// Leetcode 42
// Leetcode 121