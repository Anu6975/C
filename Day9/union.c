#include<stdio.h>
#include<string.h>

union employee
{
    int id;
    char name[45];
    float weight;
}e1;


int main(){

    e1.id=1;
    e1.weight=48.8;
    strcpy(e1.name, "Anuja");
    
    printf("ID: %d\nWeight: %.2f\nName: %s", e1.id, e1.weight, e1.name);
}