#include <stdio.h>
int b;
int add(){
int a=2;                
static int c=70;
a=a+1;
b=b+1;
c=c+1;
printf("\n%d", a);
printf("\n%d",b);
printf("\n%d",c);

}
int main(){
    add();
    add();
    add();
}