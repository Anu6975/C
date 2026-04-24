#include<stdio.h>

int main(){

    // ** If-else Statements **

    int num=55;
    if(num%2==0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }



    // ** Else if Statement **

    int marks;
    printf("\nEnter Your Marks: ");
    scanf("%d",&marks);

    if(marks==60){
        printf("Average Marks");
    }
    else if(marks==70){
        printf("Good MArks");
    }
    else if(marks ==80){
        printf("Best Marks");
    }
    else{
        printf("Invalid Marks");
    }




    // ** Switch Statement **

    int n;
    printf("Select Time Range: \n");
    printf("1. 4 am-11:59 am \t2. 12 pm -7pm \t3.7pm Onwards \n 1/2/3: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Hello! Good Morning!!");
        break;
    case 2:
        printf("Hello! Good Afternoon");
        break;
    case 3:
        printf("Good Night!!");
        break;
    
    default:
        printf("Enter Valid Choice");
        break;
    }
    
}