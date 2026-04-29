#include<stdio.h>

int update(int *n ){
    printf("Before updation n=%d\n",*n);
    *n=*n+1;
    printf("After updation n=%d\n",*n);
}

int main(){
    int a=10;
    printf("Before fuction call a=%d",a);
    update(&a);
    printf("After fuction call a=%d",a);
}