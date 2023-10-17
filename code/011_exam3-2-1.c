#include <stdio.h>

int main() {
    printf("Enter N = ");
    unsigned short int N;
    scanf("%hu", &N);
    for (int i=0; i<N; i++) {
        for (int j=1; j<=N; j++) {
            printf("%d", i+j); 
        }
        printf("\n");
    }  
    
    return 0; 
}

