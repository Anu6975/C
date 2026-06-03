#include<stdio.h>

void printArray(int n, int arr[]){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int n, int arr[]){
    int j;
    for(int i=1; i<n; i++){
        int key=arr[i];

        for(j=i-1; j>=0 && arr[j]>key; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    printArray(n, arr);
}

int main(){
    int n;
    printf("Enter Element Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting: ");
    printArray(n, arr);

    printf("\nAfter Sorting : ");
    insertion_sort(n, arr);
}