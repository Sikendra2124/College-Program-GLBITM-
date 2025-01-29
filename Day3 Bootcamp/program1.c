//factorial of a number
#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of the number is = %d\n", fact(n));
    return 0;
}