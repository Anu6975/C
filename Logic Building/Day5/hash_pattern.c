#include<stdio.h>

int main(){

    /* Printing "*"" Hash */
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            if(r==1 || r==3 || c==1 || c==3 )
          printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }

    printf("\n");


    /* Printing Number Hash*/
    int n=5;
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            if(r==1 || r==3 || c==1 || c==3 )
          printf("%d",n);
        else
        printf(" ");
        }
        printf(" \n");
    }

    printf("\n");

    /* Printing Character Hash*/
    char ch='a';
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            if(r==1 || r==3 || c==1 || c==3 )
          printf("%c",ch);
        else
        printf(" ");
        }
        printf(" \n");
    }

    return 0;
}