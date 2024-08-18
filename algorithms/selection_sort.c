#include <stdio.h>


void printArray(int arr[], int size) {
    for (int i  = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selection_sort(int arr[], int size) {
    for (int i = 0 ; i < size-1; i++) {
        int mini = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        if (mini != i) {
            int temp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = temp;
        }
    }
}

int main() {
    int arr[] = {3,1,6,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    selection_sort(arr,n);
    printArray(arr, n);
}
