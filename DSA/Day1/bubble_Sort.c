#include<stdio.h>

void bubble_sort(int n, int arr[]){
     for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;}
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    bubble_sort(n, arr);
}

/**
 * BUBBLE SORT ALGORITHM
 * 
 * 1. Begin
 * 2. Get the array and its length (N).
 * 3. Loop through the array from index i = 0 to N-1 (Passes):
 *    a. Set a 'swapped' flag to false.
 *    b. Loop through unsorted elements from index j = 0 to N-i-1:
 *       - Compare adjacent elements: arr[j] and arr[j+1].
 *       - If arr[j] > arr[j+1], swap them and set 'swapped' to true.
 *    c. If 'swapped' remains false, break early (array is sorted).
 * 4. Repeat until the largest elements bubble to the end.
 * 5. Exit
 */
