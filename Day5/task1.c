#include <stdio.h>

// greatest of 3
int greatest(){
    int a=5, b=70, c=23;
    if(a>b && a>c){
        printf("%d is Greater!",a);
    }
    else if(b>a && b>c){
        printf("%d is Greater!",b);
    }
    else{
        printf("%d is Greater!",c);
    }

}
int main(){
    greatest();
    return 0;
}