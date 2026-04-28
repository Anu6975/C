#include<stdio.h>

// 1. swapping
int swap(){
    int x=10, y=5, temp;
    printf("Before swap: x = %d, y = %d\n", x, y);
    
    temp=x;
    x=y;
    y=temp;

    printf("After swap: x = %d, y = %d\n", x, y);
}


int main(){
    swap();
    return 0;
}