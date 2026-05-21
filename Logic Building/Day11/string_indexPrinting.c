#include<stdio.h>
#include<string.h>

int main(){

    int i;

    char str[90];
    char index;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a lettr: ");
    scanf("%c", &index);

    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == index){
            printf("%d", i);
            break;
        }
    }
    
}