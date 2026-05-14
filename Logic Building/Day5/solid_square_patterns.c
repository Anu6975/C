#include<stdio.h>
int main()
{
    /* Letters Square*/
    for(int r=0;r<5;r++)
    {
        char ch='a';
        for(int c=0;c<5;c++)
        {
          printf("%c",ch);
          ch++;
        }
        printf("\n");
    }

    printf("\n");
    
    /* Number Square */

    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
          printf("%d",c+1);
        }
        printf("\n");
    }

    return 0;
}