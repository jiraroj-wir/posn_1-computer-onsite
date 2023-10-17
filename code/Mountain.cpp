#include <stdio.h>

void mountain(int n) {
    unsigned int star = 1;
    for (int i=n; i>0; i--) {
        for (int j=i-1; j>0; j--) {
            printf(" ");
        }
        for (int k=1; k<=star; k++) {
            printf("*");
        }
        for (int l=2*i-2; l>0; l--) {
            printf(" ");
        }
        for (int m=1; m<=star; m++) {
            printf("*");
        }
        star+=2;
        printf("\n");
    }
}
int main(int argc, char *argv[]) {
    unsigned short int n;
    scanf("%hu", &n);
    mountain(n);
    
    return 0;
}
