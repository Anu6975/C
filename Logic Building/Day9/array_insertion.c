#include<stdio.h>

int main(){

    int array[6]={1,2,3,4,5};

    printf("Before Insertion: \n");
    for(int i=0; i<5; i++){
        printf(" %d", array[i]);
    }

    array[5]=6;

    printf("\nAfter Insertion: \n");
    for(int i=0; i<6; i++){
        printf(" %d", array[i]);
    }
}