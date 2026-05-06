#include<stdio.h>
int main(){
    int num[3][2]={{12,24},{26,36},{46,55}};

    for(int r=0;r<3;r++){
        for(int c=0;c<2;c++){
            printf("%d ",num[r][c]);
        }
        printf("\n");
    }
}