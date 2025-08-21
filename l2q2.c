#include <stdio.h>

int find(int *arr, int start, int n) {
    int min= start;
    for (int i = start + 1; i < n; i++) {
        if (*(arr + i) < *(arr + min)) {
            min = i;
        }
    }
    return min;
}

void recursive (int *arr, int start, int n) {
    if (start >= n - 1)
        return;

    int min= find(arr, start, n);

    if (min!= start) {
        int temp = *(arr + start);
        *(arr + start) = *(arr + min);
        *(arr + min) = temp;
    }

    recursive(arr, start + 1, n);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    recursive(arr, 0, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
