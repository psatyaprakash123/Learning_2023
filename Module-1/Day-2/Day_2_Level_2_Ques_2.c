#include <stdio.h>

int compareArrays(int arr1[], int arr2[], int n) {
    int x;
    for(int i=0;i<n;i++){
            x=0;
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                x=1;
            }
        }
        if(x==0){
            return 0;
        }
    }

    return 1;

}

int main() {
    printf("Enter size\n");
    int n;
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

    int result = compareArrays(arr1, arr2,n);

    if (result == 1) {
        printf("Arrays are equal\n");
    } else {
        printf("Arrays are not equal\n");
    }

    return 0;
}

