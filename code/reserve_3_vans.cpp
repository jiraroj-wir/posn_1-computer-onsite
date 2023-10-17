#include <stdio.h>

int find_min(unsigned short int A, unsigned short int B, unsigned short int C) {
    return (A < B) ? (A < C ? A : C) : (B < C ? B : C);
}

int main(int argc, char **argv) {
    unsigned short int N, t;
    scanf("%hu", &N);
    
    unsigned short int A, B, C;
    for (int i=0; i<N; i++) {
        scanf("%hu", &t); 
        CHECK_AGAIN:
        if (A == 0) {
            printf("A\n");
            A = t;
        }
        else if (B == 0) {
            printf("B\n");
            B = t;
        }
        else if (C == 0) {
            printf("C\n");
            C = t;
        }
        else {
            unsigned short int wait_d = find_min(A, B, C);
            A-=wait_d;
            B-=wait_d;
            C-=wait_d;
            goto CHECK_AGAIN;
        }
    }
    
    return 0;
}
