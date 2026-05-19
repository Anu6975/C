#include<stdio.h>

int main(){

    char string[25];

    printf("Enter a String: ");
    // scanf(" %s", &string);
    fgets(string, sizeof(string), stdin);

    printf("%s", string);
}