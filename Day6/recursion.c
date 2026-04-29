#include<stdio.h>

int sum(int n){
    if(sum == 0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}

int main(){
    printf("sum=%d",sum(10));
    return 0;
}