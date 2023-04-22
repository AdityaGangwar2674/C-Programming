#include <stdio.h>

void findMinMax(int *arr, int size, int *minPtr, int *maxPtr);

int main() {
    int arr[100], size, min, max;
    int *minPtr, *maxPtr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    minPtr = &arr[0];
    maxPtr = &arr[size - 1];

    findMinMax(arr, size, minPtr, maxPtr);

    printf("The smallest element in the array is: %d\n", *minPtr);
    printf("The largest element in the array is: %d\n", *maxPtr);

    return 0;
}

void findMinMax(int *arr, int size, int *minPtr, int *maxPtr) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < *minPtr) {
            minPtr = &arr[i];
        }
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
}
