#include <stdio.h>

void diamond(unsigned short int n) {
    int sp = n / 2, star = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < sp; j++) {
            printf(" ");
        }

        for (int k = 0; k < star; k++) {
            printf("*");
        }

        printf("\n");

        if (i < n / 2) {
            sp--;
            star += 2;
        } else {
            sp++;
            star -= 2;
        }
    }
}

int main() {
    unsigned short int n;
    scanf("%hu", &n);
    
    diamond(n);
    
    return 0;
}	
