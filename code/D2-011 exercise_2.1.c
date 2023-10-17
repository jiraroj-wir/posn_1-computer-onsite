#include <stdio.h>
#include <assert.h>

int main() {
    int score[4];
    int sum = 0;
    for (int i=0; i<4; i++) {
        scanf("%d", &score[i]);
        assert(score[i]<=100);
        assert(score[i]>=0);
        sum+=score[i];
    }
    printf("%d", sum/4);
    
    return 0;
}
