#include<stdio.h>

int main(){
    FILE *file;
    char text[200];

    /* Writting String in File*/
    file=fopen("myFile2.txt","w");
    fputs("Hello, My Name is Anuja!!", file);
    fclose(file);

    /* Reading String in File*/
    file=fopen("myFile2.txt", "r");
    printf("%s", fgets(text,200,file));
    fclose(file);
}