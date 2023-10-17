#include <stdio.h>
#include <assert.h>

int main() {
    unsigned short int num;
    scanf("%hu", &num);
    assert(num >= 0 && num <= 255);

    unsigned short int quotient = num;
    int rmd[8], ans = 0;
    int i = 7;

    do {
        rmd[i] = 0;
        ans = quotient;
        quotient = ans / 2;
        if (ans % 2 != 0) {
            rmd[i] = 1;
        }
        i--;
    } while (quotient != 0);

    for (int j = 0; j < 8; j++) {
        printf("%d", rmd[j]);
    }

    return 0;
}
