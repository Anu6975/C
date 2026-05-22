#include<stdio.h>

int main(){

    char str[90];
    int index;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter Index Number: : ");
    scanf("%d", &index);

    printf("'%c'", str[index+1]);

}
