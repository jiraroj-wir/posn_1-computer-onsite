#include <stdio.h>

int main() {
    int mid, final;
    scanf("%d%d", &mid, &final);
    int score = (mid+final)/2;
    if (score >= 80 && score <= 100) {
        printf("Grade = G");
    } 
    else if (score >= 50 && score < 80) {
        printf("Grade = P");
    } 
    else if (score >= 0 && score < 50) {
        printf("Grade = F");
    }
    
    return 0;
}
