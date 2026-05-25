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
    
    int max= arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Maximum Element is: %d", max);  
}