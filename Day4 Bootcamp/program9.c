//program to find the freqency in a soreted array.
#include<stdio.h>
int main(){
    int a[10],i,j,n,freq[10],max,min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        freq[i]=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                freq[i]++;
                a[j]=0;
            }
        }
    }
    max=freq[0];
    min=freq[0];
    for(i=0;i<n;i++){
        if(freq[i]>max){
            max=freq[i];
        }
        if(freq[i]<min){
            min=freq[i];
        }
    }
    printf("The frequency of elements in the array is: ");
    for(i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",a[i],freq[i]);
        }
    }
    printf("The maximum frequency is: %d\n",max);
    printf("The minimum frequency is: %d",min);
    return 0;
}