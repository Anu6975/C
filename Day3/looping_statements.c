#include<stdio.h>

int main(){
    int n;

    // ** For Loop **
    for(int i=0; i<=10; i++){
        printf("%d ",i);
    }

    // ** While Loop **
    printf("\n");
    int i=0;
    while(i<=10){
        printf("%d ",i);
        i++;
    }

    // ** Do-While Loop **
    printf("\n");
    n=7;
    do{
        printf("Fortune ");
        n++;
    }while (n<=10);

}