#include<stdio.h>

void printArray(int n, int arr[]){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void selection_sort(int n, int arr[]){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        int temp      =arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i]        = temp;
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
    selection_sort(n, arr);
}

/**
 * SELECTION SORT ALGORITHM
 *
 * 1. Find the minimum element in the unsorted subarray.
 * 2. Swap it with the first unsorted element.
 * 3. Move the boundary between sorted and unsorted subarrays one element to the right.
 * 4. Repeat until the array is fully sorted.
 */