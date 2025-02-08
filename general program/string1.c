// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1,str2,str3;
//     printf("enter first string:");
//     scanf("%s",&str1);
//     printf("enter second string:");
//     scanf("%s",&str2);
//     for(int i=0;i<'\0';i++){
//         for(int j=0;j<'\0';j++){
//             if(str1[i]==str2[j]){
//                 printf("%c",str1[i]);
//                 }
//             }
//         }
//     }
//input two string and print matched if both string character are same or not.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10];
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    printf("Common characters: ");
    for (int i = 0; i < strlen(str1); i++) {
        for (int j = 0; j < strlen(str2); j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break; // To avoid printing the same character multiple times
            }
        }
    }
    printf("\n");

    return 0;
}