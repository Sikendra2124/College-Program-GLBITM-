#include<stdio.h>
int main()
{
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s < i ; s++)
        {
            printf(" ");
        }
        for (int j=i; j < n*2; j++)
        {
            // if (i==1 || j==1 || j==n*2)
            // {
                printf("*");
            // }
            // else{
            //     printf(" ");
            // }
            
        }
        printf("\n");
        
    }
    
return 0;
}