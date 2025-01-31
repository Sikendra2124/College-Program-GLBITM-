//write a program to find the maximum length even-odd subarray in c.
#include<stdio.h>
int main(){
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++) {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
            curr++;
            res = (res > curr) ? res : curr;
        } else {
            curr = 1;
        }
    }
    printf("The maximum length of the even-odd subarray is %d", res);
    return 0;
}