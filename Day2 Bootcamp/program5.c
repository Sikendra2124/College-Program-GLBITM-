#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an uppercase letter.\n");
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The character is an uppercase vowel.\n");
        } else {
            printf("The character is an uppercase consonant.\n");
        }
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a lowercase letter.\n");
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character is a lowercase vowel.\n");
        } else {
            printf("The character is a lowercase consonant.\n");
        }
    }
    else {
        printf("The character is not an alphabet.\n");
    }

    return 0;
}
