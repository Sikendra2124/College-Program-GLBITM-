#include<stdio.h>
// #include<string.h>
int main(){
    char str1[5],str2[5];
    int i=0,flag=0;
    printf("Enter first string: ");
    for(i=0;i<5;i++){
        scanf("%s",&str1);
    }
    // gets(str1);
    printf("Enter second string: ");
    // gets(str2);
    for(i=0;i<5;i++){
        scanf("%s",&str2);
    }
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i]) {
            flag=1;
            break;
         }
         i++;
        }
        if(flag==0)
         {
            printf("matched\n");
        }else{
            printf("not matched");
        }
        return 0;
    }
   


