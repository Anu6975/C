#include<stdio.h>

int main(){
    int i,n;

    printf("Enter Length of Square: ");
    scanf("%d",&n);
    int count=1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");    
    }
    
}