#include<stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5};
    printf("Before Insertion: ");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    for (int i = 5; i >0; i--){
       arr[i]=arr[i-1]; 
    }
    int n;
    printf("\nEnter the Array Element u want to store: ");
    scanf("%d", &n);

    arr[0]=n;
     printf("\nAfter Insertion: ");
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }   
}