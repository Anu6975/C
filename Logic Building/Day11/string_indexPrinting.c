#include<stdio.h>
#include<string.h>

int main(){
    char str[90], index;
    int flag=0;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a letter: ");
    scanf("%c", &index);

    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == index){
            printf("%d", i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Character Not Found!");
    }  
}