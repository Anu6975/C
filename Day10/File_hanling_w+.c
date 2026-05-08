#include<stdio.h>

int main(){
    FILE *file;

    file= fopen("myFile3.txt", "w+");
    fputs("Hello, I'm", file);

    fseek(file, 10, SEEK_SET);
    fputs(" Anuja!!", file);

    fseek(file, 0, SEEK_END);
    int len=ftell(file);
    fclose(file);

    printf("Length of File is %d bytes", len);
}