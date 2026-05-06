#include<stdio.h>
int main(){
    int mark[2][2][2]={{{1,2,3},{4,5,6}},{{6,7,8},{8,9,0}}};
    for (int d = 0; d < 2; d++){
        for(int r=0;r<2;r++){
            for(int c=0;c<3;c++){
                printf("%d",mark[d][r][c]);

            }
            printf("\t");
        }
        printf("\n");
    }
}