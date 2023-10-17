#include <stdio.h>

int main() {
    unsigned short int score[10], pass = 0, fail = 0;
    unsigned int sum = 0; 
    for (int i=0; i<10; i++) {
        scanf("%hu", &score[i]);
        if (score[i] >= 50) {
            pass++;
        }
        else {
            fail++;
        }
        sum += score[i];
    }
    for (int j=9; j>=0; j--) {
        printf("%hu\n", score[j]);
    }
    printf("sum : %u\tavg : %.2f\n", sum, (float)sum/10);
    printf("pass : %hu\tfail : %hu", pass, fail);
    
    return 0;
}
