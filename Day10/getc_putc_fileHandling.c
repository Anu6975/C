#include<stdio.h>

int main(){

    FILE *file;
    char c;

    /* Writting Single Character in File */

    file = fopen("myFile1.txt", "w");
    fputc('H', file);
    fclose(file);

    /* Printing Single Character From File */

    file=fopen("myFile1.txt", "r");
    while (( c=fgetc(file) ) != EOF)
    {
        printf("%c",c);
    }
    fclose(file);
    
}

