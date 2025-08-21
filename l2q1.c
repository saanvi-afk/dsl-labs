#include <stdio.h>
#include <stdlib.h>

int findSmallest(int *arr, int size) {
    int *ptr = arr;
    int smallest = *ptr;
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }
    return smallest;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

     if (n <= 0) {
    printf("Array size must be greater than zero.\n");
    return 1;
}


    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, n);

    printf("The smallest element is: %d\n", smallest);

    free(arr);

    return 0;
}
