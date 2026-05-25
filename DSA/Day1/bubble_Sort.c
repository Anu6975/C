#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    int arr[n+1];

    for(int i=0; i<n; i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}