#include<stdio.h>
#include<dos.h>

int main(){
    int a=34;
    printf("This is Integer: %d",a);

    float b=34.5;
    printf("\nThis is Float: %f",b);

    char c='A';
    printf("\nThis is Character: %c",c);

    int p=54;
    int q;

    q=p;
    printf("\n%d",q);

    int d=23, e=5;
    printf("\n%d",d%e);
    printf("\n%d",d<e);
    printf("\n%d", p==q);

}