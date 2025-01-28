//armstrong number 
#include <stdio.h>
// #include <math.h>
int main(){
    int n,oroginal_no,remainder,result=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    oroginal_no = n;
    while(oroginal_no!=0){
        remainder = oroginal_no%10;
        result += remainder*remainder*remainder;
        oroginal_no /= 10;
    }
    if(result == n){
        printf("%d is an armstrong number\n", n);
    }else{
        printf("%d is not an armstrong number\n", n);
    }

    return 0;
}