// Merge Sort is a sort which divides the elements into the 2 parts sorts them and then merges it byt sorting it again!

#include<stdio.h>

void printArray(int n, int arr[]){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void merge(int arr[], int start, int mid, int n){
    int sizeL= mid - start + 1;
    int sizeR= n - mid;

    int L[sizeL], R[sizeR];
    for(int i=0; i<sizeL; i++){
        L[i] = arr[start + i];
    }
    for(int j=0; j<sizeR; j++){
        R[j]= arr[mid+1 +j];     
    }
        
    int i=0, j=0, k=start;        
    while(i<sizeL && j< sizeR){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
        }
    while(i<sizeL){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < sizeR) {
        arr[k] = R[j];
        j++; 
        k++;
    }
}


void merge_sort(int arr[], int start, int n){
    if(start<n){
        int mid = start+ (n-start)/2;

        merge_sort(arr, start, mid );
        merge_sort(arr, mid+1, n );
        merge(arr, start, mid, n);
    }
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

    merge_sort(arr, 0, n-1);
    printf("\nAfter Sorting : ");
    printArray(n, arr);
    
}