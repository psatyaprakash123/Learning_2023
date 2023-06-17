#include <stdio.h>

// Function to swap every alternate element of the array
void swapAlternateElements(int arr[], int size) {
    for (int i = 0; i < size - 2; i += 4) {
        int temp = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Enter size\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before swapping: ");
    printArray(arr, n);

    swapAlternateElements(arr, n);

    printf("After swapping:  ");
    printArray(arr, n);
    return 0;
}
