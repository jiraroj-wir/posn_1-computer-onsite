#include <stdio.h>

int main() {
    for (int a=0; a<5; a++) {
        for (int b=0; b<=a; b++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (int m=0; m<5; m++) {
        for (int n=0; n<=m; n++) {
            printf("%d", m+1);
        }    
        printf("\n");
    }
    printf("\n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<=i; j++) {
            printf("%d", j+1);
        }
        printf("\n");
    }
    
    return 0;
}
