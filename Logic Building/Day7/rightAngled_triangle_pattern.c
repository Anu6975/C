#include<stdio.h>

int main(){
    int n=5;
    // printf("Enter the Length of Right Angled Triangle: ");
    // scanf("%d", &n);

    /*  Printing Stars*/
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }

        printf("\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

        printf("\n");

    int i,j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1 ; j<=n-i; j++)
        {
            printf("  ");
        }

        for (j = 1 ; j <= i; j++)
        {
            printf("* ");
        }  
        printf("\n");
    }
    

        printf("\n\n");

    /* Printing Numbers in different patterns*/
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }



    printf("\n\n");
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}