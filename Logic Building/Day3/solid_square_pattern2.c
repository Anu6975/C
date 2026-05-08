#include<stdio.h>

int letter_pattern(int n){
    int i, j;
    char a;

    printf("Enter a letter: ");
    scanf(" %c", &a);

    for(i=0; i<n;i++){
        for (j = 0; j<n; j++)
        {
            printf("%c ", a);
        }
        printf("\n");
    }
    return 0;
}

int number_patter(int n){
    int i, j, a;

    printf("Enter a Number: ");
    scanf("%d", &a);

    for(i=0; i<n;i++){
        for (j = 0; j<n; j++)
        {
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}

int different_letters_pattern(int n){
    int i,j;
    char a,b;

    printf("Enter 2 Characters to repeat: ");
    scanf(" %c %c", &a, &b);

    for(i=0; i<n;i++){
        for (j = 0; j<n; j++)
        {
            if (i%2==0)
            {
                printf("%c ", a);
            }
            else{
                printf("%c ",b);
            }  
        }
        printf("\n");
    }
    return 0;
}

int different_numbers_pattern(int n){
    int i, j, a, b;

    printf("Enter 2 Numbers: ");
    scanf("%d %d", &a, &b);

    for(i=0; i<n;i++){
        for (j = 0; j<n; j++)
        {
            if(i%2==0)
            printf("%d ", a);

            else{
                printf("%d ", b);
            }
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int n,c;

    printf("Enter Length to form a square: ");
    scanf("%d", &n);

    printf("\n1. Number \n2. Letter \n3. Different Letter Pattern \n4. Different Number Pattern \n\nEnter Choice(1/2/3/4): ");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        letter_pattern(n);
        break;

    case 2:
        number_patter(n);
        break;
    
    case 3:
        different_letters_pattern(n);
        break;

    case 4:
        different_numbers_pattern(n);
        break;
    
    default:
        printf("Invalid Input!");
        break;
    }

    return 0;
}