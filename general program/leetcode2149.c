#include <stdio.h>

void rearrangeArray(int arr[], int n, int result[]) {
    int posIndex = 0, negIndex = 0;
    int pos[n/2], neg[n/2];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos[posIndex++] = arr[i];
        } else {
            neg[negIndex++] = arr[i];
        }
    }
    posIndex = 0;
    negIndex = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = pos[posIndex++];
        } else {
            result[i] = neg[negIndex++];
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int result[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrangeArray(arr, n, result);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}