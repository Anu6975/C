#include<stdio.h>

int main(){
    int n;

    printf("\nEnter Season Number: ");
    printf("\n1. Summer 2. Winter 3. Monsoon (1/2/3): ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Don't Forget to Apply Sunscreen!");
        break;
    case 2:
        printf("Don't Forget to Wear something warm!");
        break;

    case 3:
        printf("Keep your umbrella with you :)");
        break;
    
    default:
        break;
    }
}