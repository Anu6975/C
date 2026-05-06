#include<stdio.h>

struct student
{
    int id;
    char name[10];
};


int main(){
    struct student s[5];
    int i;
    
    for(i=0; i<5; i++){
        printf("\nEnter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", &s[i].name);
    }

    printf("\nStudent Information: \n");

    for(i=0; i<5; i++){
        printf("\n%d. %s", s[i].id, s[i].name);
    }
    
}