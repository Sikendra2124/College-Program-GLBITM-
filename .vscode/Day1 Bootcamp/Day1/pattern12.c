#include <stdio.h>

int main() {
    int n = 5; 
    for (int i = n; i >= 1; i--) {
        for (int s = n; s > i; s--) {
            printf(" ");
        }
        for (int j = 1; j <= i * 2 - 1; j++) {
            if (j == 1 || j == i * 2 - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    return 0;
}
