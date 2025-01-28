//factorial number
#include <stdio.h>
int main(){
    int n,oroginal_no,factorial=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    oroginal_no = n;
    while(oroginal_no!=0){
        factorial *= oroginal_no;
        oroginal_no--;
    }
    if(factorial == n){
        printf("%d is a factorial number\n", n);
    }else{
        printf("%d is not a factorial number\n", n);
    }

    return 0;
}