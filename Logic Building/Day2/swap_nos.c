#include<stdio.h>

int swap_2Variables(int a,int b){

    printf("Before Swapping: \n1st No: %d    2. 2nd No: %d", a,b);

    /* Swapping Logic */
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter Swapping: \n1st No: %d    2. 2nd No: %d", a,b);

    return 0;
}

int swap_3Variables(int a,int b){
    int temp; 

    printf("Before Swapping: \n1st No: %d    2. 2nd No: %d", a,b);

    /* Swapping Logic */
    temp=a;
    a=b;
    b=temp;

    printf("\nAfter Swapping: \n1st No: %d    2. 2nd No: %d", a,b);

    return 0;
}


int main(){
    int a,b,n;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\n1. Swap With Two Variable    2. Swap with Three Variables \nEnter Choice(1/2): ");
    scanf("%d",&n);


    switch (n)
    {
    case 1:
        swap_2Variables(a,b);
        break;
    
    case 2:
        swap_3Variables(a,b);
        break;
    
    default:
    printf("Invalid Input!");
        break;
    }
}