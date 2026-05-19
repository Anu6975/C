#include<stdio.h>

int main(){

    int n, arr[10]={10, 20, 30, 35};
    int el;

    printf("Array Elements Before Insertion: ");
    for(int i=0; i<4; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter Where u wanna Insert an Element: ");
    scanf("%d", &n);

    printf("\nEnter The Element to insert: ");
    scanf("%d", &el);

    for (int i = 4; i >=n; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[n]= el;


    for(int i=0; i<=4; i++){
        printf("%d ", arr[i]);
    }
}