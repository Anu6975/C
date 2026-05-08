#include<stdio.h>

int main(){

    FILE *file1;
    char input[20];

    file1 = fopen("myFile.txt", "r");

    while (fscanf(file1, "%s", input)!= EOF)
    {
        printf("%s ", input);
    }

    rewind(file1);
    printf("\n");

    while (fscanf(file1, "%s", input)!= EOF)
    {
        printf("%s ", input);
    }

    fclose(file1); 
}