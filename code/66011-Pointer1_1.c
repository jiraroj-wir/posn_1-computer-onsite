#include <stdio.h>

int elements_sum(int *arr, unsigned short int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum+=*arr;
        arr++;
    }
    
    return sum;
}
int main() {
    printf("Input the number of elements ( max 10 ) : ");
    unsigned short int n;
    scanf("%hu", &n);
    printf("Input %hu number of elements in the array : \n", n);
    
    int arr[10];
    for (int i=0; i<n; i++) {
        printf("\telement - %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int sum = elements_sum(arr, n);
    printf("The sum of array is : %d", sum);
    
    return 0;
}
