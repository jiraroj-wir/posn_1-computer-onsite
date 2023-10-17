#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int arr[], int size);
void swap(int *i, int *j);

int main() {
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubble_sort(arr, 10);
    for (int j = 0; j < 10; j++) {
        printf("%d ", arr[j]);
    }
    
    return 0;
}

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void bubble_sort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

