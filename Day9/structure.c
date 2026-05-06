#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[45];
    float weight;
}e1;


int main(){
    e1.id=1;
    strcpy(e1.name, "Anuja");
    e1.weight=48.8;

    printf("ID: %d\nName: %s\nWeight: %.2f", e1.id, e1.name, e1.weight);
}