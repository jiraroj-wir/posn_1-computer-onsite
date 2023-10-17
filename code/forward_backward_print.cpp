#include <stdio.h>

void reverse(int n[], unsigned short int N) {
    for (int i=N-1; i>=0; i--) {
        printf("%d ", n[i]);
    } 
}

int main(int argc, char **argv) {
    unsigned short int N;
    scanf("%hu", &N);
    int n[N], M; 
    
    for (int i=0; i<N; i++) {
        scanf(" %d", &n[i]);    
    }
    scanf(" %d", &M);
    
    for (int i=0; i<N; i++) {
        n[i] += M;
    }
    
    if (M < 0) {
        reverse(n, N);
        goto skip;
    }
    
    for (int i=0; i<N; i++) {
        printf("%d ", n[i]);
    }
    
    skip: 
    
    return 0;
}
