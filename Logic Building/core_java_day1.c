#include<stdio.h>

int main(){
    int n=20;

    while(n!=1){
        printf("%d ", n);
        n--;
    }

    int num=35;

    if(num<0){
        printf("\n\n%d is a Negative Number", num);
    }
    else if(num==0){
        printf("Number is Zero!");
    }
    else{
        printf("\n\n%d is a Positive Number\n", num);
    }
    int t=6;

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", t, i, i*t);
    }
}