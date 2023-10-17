#include <stdio.h>

int main() {
    unsigned short int input[9];
    for (int i=0; i<10; i++) {
        printf("Input %d : ", i);
        scanf("%hu", &input[i]);
    }
    printf("Element\t\tvalue\t\tHistogram\n");
    for (int j=0; j<10; j++) {
        printf("%d\t\t%hu\t\t", j, input[j]);
        for (int k=0; k<input[j]; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
