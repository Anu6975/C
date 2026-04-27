#include<stdio.h>

/* Prameterized Functions */

int sub(int a, int b){                          // a and b are Parameters
    int c=a-b;
    printf("\n%d - %d = %d", a,b,c);
}




int hello();                                    //Function Declaration

/*  Default Functions */
int hello(){                                    //Function Definition
    printf("Hello!");

    return 0;
}
int add(){
    int a=14, b=45;
    printf("\n%d + %d = %d", a,b,a+b);

    return 0;
}

int main(){
/*  Default Functions */
    hello();                                    //Function Calling
    add();

/* Prameterized Functions */

    sub(23, 13);                                // 23 and 13 are Arguments and are called Actual Parameters

    return 0;
}