//write a program to find the majority element in an array in c.

#include<stdio.h>
int main(){
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);   
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
        }
    }
    if (count > n / 2) {
        printf("Majority element is 1");
    }
    else {
        printf("Majority element is 0");
    }
    return 0;
}


