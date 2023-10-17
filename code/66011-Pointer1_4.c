#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubble_sort(int arr[], int n)
{
    bool swapped;
    for (int i=0; i<n-1; i++) {
        swapped = false;
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main(int argc, char *argv[]) {
    printf("Input the number of elements ( max 15 ) : ");
    char n;     // 8 bit integer
    scanf("%c", &n);
    
    printf("Input %c number of elements in the array : \n", n);
    int arr[n];
    for (short int i=0; i<n-'0'; i++) {
        printf("\telement - %hd : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("The elements of array in reverse order are : \n");
    for (short int j=n-'0'-1; j>=0; j--) {
        printf("\telement - %hd : %d\n", j+1, arr[j]);
    }
    
    bubble_sort(arr, n-'0');
    printf("The elements in the array after sorting : \n");
    for (short int k=0; k<n-'0'; k++) {
        printf("\telement - %hd : %d\n", k+1, arr[k]);
    }
    return 0;
}
