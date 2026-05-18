#include <stdio.h>

int main(){

    int i,j,n=5;

     // Printing Triangle
    for (i = 1; i <= n; i++)
    {
        for (j = 1 ; j<=n-i; j++)
        {
            printf(" ");
        }

        for (j = 1 ; j <= i; j++)
        {
            printf("* ");
        }  
        printf("\n");
    }

    printf("\n\n");

    // Printing Half-Pyramid with asterisk(*)
    for(i=1; i<4; i++){

        for(j=3; j>i; j--){
            printf(" ");
        }
        for(j=0; j< (2*i)-1 ; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Printing Half-Pyramid with numbers
    for(i=1; i<4; i++){

        for(j=3; j>i; j--){
            printf(" ");
        }
        for(j=1; j<= (2*i)-1 ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    // Printing Half-Pyramid with alphabets
    char ch=65;
    for(i=1; i<4; i++){
        for(j=3; j>i; j--){
            printf(" ");
        }
        for(j=1; j<= (2*i)-1 ; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }


    printf("\n");

    // Printing Inverted Half-Pyramid
    for(i=1; i<4; i++){
        for(j=1; j<i; j++){
            printf(" ");
        }
        for(j=5; j>= (2*i)-1 ; j--){
            printf("*");
        }
        printf("\n");
    }
}