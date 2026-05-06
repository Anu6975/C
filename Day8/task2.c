/* String Manipulation */

#include<stdio.h>
#include<string.h>

int main(){
    char my_name[20]="Anuja";
    char concate[20]= " Badve";
    char full_name[23];

    printf("1. Length of the String %s -> %d", my_name, strlen(my_name));
    strcpy(full_name, my_name);
    printf("\n2. Copying my name %s in Full name -> %s", my_name, full_name);
    printf("\n3. Concatinating My name %s with my surname(Badve) -> %s", my_name, strcat(full_name, concate));
    printf("\n4. Reversing My name %s -> %s", my_name, strrev(full_name));
}
