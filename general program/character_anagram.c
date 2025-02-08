#include <stdio.h>

int areAnagrams(char str1[], char str2[]) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    // Count frequency of each character in str1
    for (i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;
    }

    // Count frequency of each character in str2
    for (i = 0; str2[i] != '\0'; i++) {
        count2[(int)str2[i]]++;
    }

    // Compare character counts of both strings
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}

int main() {
    char str1[100], str2[100];
    int i;

    printf("Enter first string: ");
    i = 0;
    while ((str1[i++] = getchar()) != '\n');
    str1[i - 1] = '\0'; // Remove newline character

    printf("Enter second string: ");
    i = 0;
    while ((str2[i++] = getchar()) != '\n');
    str2[i - 1] = '\0'; // Remove newline character

    if (areAnagrams(str1, str2)) {
        printf("%s and %s are anagrams\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams\n", str1, str2);
    }

    return 0;
}