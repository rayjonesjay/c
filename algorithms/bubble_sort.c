#include <stdio.h>
#include <time.h>

int main() {
    int arr[] = {9,8,7,6,5};
    int length = sizeof(arr) / sizeof(arr[0]);

    clock_t start,end;

    double cpu_time_used;

    start = clock();

    int c = 0;
    for (int i = 0; i < length-1; i++){
        for (int j = 0; j < length-i-1; j++){
            if (arr[j] > arr[j+1]){
                c++;
                int temporary = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temporary;
            }
        }
    }
    end = clock();
    printf("number of comparisons %d\n",c);
    cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
    printf("Time taken to sort: %fs\n",cpu_time_used);
    printf("sorted array: \n");
    for (int i = 0; i < length; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
