#include<stdio.h>

int main(){
    int num;
    printf("Enter A Number: ");
    scanf("%d",&num);

    if(num<0){
        printf("Number is Negative Number");
    }
    else if(num==0){
        printf("Entered Number is Zero");
    }
    else{
        printf("Positive Number");
    }
}