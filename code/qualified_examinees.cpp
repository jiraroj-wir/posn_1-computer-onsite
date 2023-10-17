#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    char ID[6];
    unsigned short int score;
} data;

int main(int argv, char *argc[]) {
    unsigned short int N, count = 0;
    scanf("%hu", &N);
    bool ans[N];
    data *contestant = (data*)malloc(N * sizeof(data));
    float score_sum = 0;
    for (int i=0; i<N; i++) {
        ans[i] = false;
        scanf("%5s %hu", contestant[i].ID, &contestant[i].score);
        score_sum+=contestant[i].score; 
    }
    
    score_sum/=N;
    for (int j=0; j<N; j++) {
        if (contestant[j].score >= score_sum) {
            ans[j] = true;
            count++;
        }
    }
    
    printf("%hu\n", count);
    for (int k=0; k<N; k++) {
        if (ans[k] == true) {
            printf("%s\n", contestant[k].ID);
        }
    }
    
    free(contestant);
    return 0;
}
