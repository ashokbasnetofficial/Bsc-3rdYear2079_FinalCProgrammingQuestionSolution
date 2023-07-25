//sorting of any natural number
#include <stdio.h>

#define maxArraySize 20

int bubbleSort(int a[], int n);

int main() {
    int a[maxArraySize], n;
    printf("Please enter the size of the array:\n");
    scanf("%d", &n);

    printf("Enter the array of size %d:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = bubbleSort(a, n);

    if (result == 0) {
        printf("Sorting result:\n");
        for (int i = 0; i < n; i++) {
            printf("%d \t", a[i]);
        }
    } else {
        printf("Bubble sort failed! Array size exceeds the maximum limit.\n");
    }

    return 0;
}

int bubbleSort(int a[], int n) {
    if (n > maxArraySize) {
        return -1; // Return -1 to indicate failure
    }

    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    return 0; // Return 0 to indicate success
}
