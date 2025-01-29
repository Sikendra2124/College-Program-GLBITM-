//fibonacci series
#include<stdio.h>
int fib(int n){
    int t1=0,t2=1,nextterm;
    printf("fibinacci series:%d,%d,",t1,t2);
    for(int i=1;i<=n-2;i++){
        nextterm=t1+t2;
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}