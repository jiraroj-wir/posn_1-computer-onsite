#include <stdio.h>

unsigned int calculateAndPrint(unsigned short int K, unsigned int *pt, unsigned short int n) {
    *pt += n;
    unsigned int temp = *pt / (100 * K);
    if (*pt % (100 * K) == 0) {
        printf("%u\n", temp);
    } else {
        printf("%u\n", temp + 1);
    }
    return *pt;
}

int main() {
    unsigned short int K, N, n;
    scanf("%hu%hu", &K, &N);
    
    unsigned int sum = 0, *pt = &sum;

    for (int i = 0; i < N; i++) {
        scanf("%hu", &n);
        sum = calculateAndPrint(K, pt, n);
    }
    
    return 0;
}

