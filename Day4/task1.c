#include<stdio.h>

void vowel(){
    int l;
    printf("Enter a Letter: ");
    scanf("%c", &l);

    if(l=='a' || l=='A' || l=='e' || l=='i' || l=='o' || l=='u' || l=='E' || l=='I' || l=='O' || l=='U'){
        printf("\nEntered Letter is Vowel!");
    }
    else{
        printf("\nEntered Letter is not a Vowel");
    }

}



int positiveNum(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num==0)
    {
        printf("Numebr is Zero");
    }
    else if(num<0){
        printf("Number is Negative");
    }
    else{
        printf("Number is Positive");
    }

    return 0;

}

int swapNums(){
    int a,b;

    printf("Enter 2 numbers to swap: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping: %d %d", a, b);
    a= a+b;
    b=a-b;
    a=a-b;

    printf("After Swapping: %d %d", a, b);


}

int main(){
        int n;
        printf("Enter Your Choice (1/2/3) ");
        printf("\n 1.Letter Vowel 2. Positive-Negative Number 3. Swap Numbers: ");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
            vowel();
            break;

        case 2:
            positiveNum();
            break;

        case 3:
            swapNums();
            break;
        
        default:
            printf("Invalid Choice!");
            break;
        }
}