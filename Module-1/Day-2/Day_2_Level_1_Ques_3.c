#include <stdio.h>
int sumAlternateElements(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
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
    int result = sumAlternateElements(arr,n);

    printf("Sum of alternate elements: %d\n", result);

    return 0;
}

