#include<stdio.h>
int main(){
    //Upper Pyramid
    for(int i=1; i<4; i++){

        for(int j=3; j>i; j--){
            printf(" ");
        }
        for(int j=0; j< (2*i)-1 ; j++){
            printf("*");
        }
        printf("\n");
    }

    //Inverted Pyramid Logic
    for(int i=2; i<4; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int j=5; j>= (2*i)-1 ; j--){
            printf("*");
        }
        printf("\n");
    }
}