//find the maximum consecutive of 1's in binary array using function.
#include<stdio.h> 
int maxConsecutive(int arr[], int n){
    int max = 0, current = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            current++;
            if (current > max) {    
                max = current;
                }
                }
                else { 
                    current = 0;
                    }
                    }
                    return max;
                    }
    int main(){
        int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
        int n = sizeof(arr) / sizeof(arr[0]);   
        printf("Maximum consecutive 1's are %d", maxConsecutive(arr, n));
        return 0;
    }