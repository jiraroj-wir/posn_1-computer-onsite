#include <stdio.h>

int main() {
    int score;
    float count = 0, sum = 0;
    do {
        printf("Enter score : ");
        scanf("%d", &score); 
        if (score == -99) {
            break;
        }
        else {
            count++;
            sum+=score;
        }
    } while (1);
    
    float ans = sum/(count);
    printf("%.3f", ans);
    
    return 0;
}
