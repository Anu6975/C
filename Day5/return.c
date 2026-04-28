#include <stdio.h>
int display(){
    int ab=67;    //local
    int b=77;
    printf("%d",b);
    return ab;
}
int main(){
    printf("%d", display());
}