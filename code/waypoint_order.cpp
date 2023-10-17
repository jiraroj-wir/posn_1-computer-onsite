#include <stdio.h>

int main(int argc, char **argv) {
    unsigned short int R, C, K;
    scanf("%hu %hu", &R, &C);
    scanf(" %hu", &K);
    
    unsigned int coordinate[R][C] = {0};
    unsigned short int a[K], b[K];
    int count = 1;
    for (int i=0; i<K; i++) {
        scanf(" %hu %hu", &a[i], &b[i]);
        coordinate[a[i]-1][b[i]-1] = count;
        count++;
    }
    
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            printf("%u ", coordinate[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
