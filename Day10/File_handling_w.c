#include<stdio.h>

int main(){
    FILE *file1;

    file1 = fopen("myFile.txt", "w");
    fprintf(file1,"My first File Handling File in C");

    fclose(file1);
}