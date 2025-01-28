#include<stdio.h>
int main()
{
    long date;
    int day,month,k,j,year;
    printf("Enter the Date in the form of : DDMMYYYY  : ");
    scanf("%ld",&date);
    year=date%10000;
    month=(date/10000)%100;
    day=date/10000000;
    return 0;
}