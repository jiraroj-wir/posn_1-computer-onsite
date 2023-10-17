#include <stdio.h>

int main() {
    int num[5];
    int even = 0, odd = 0;
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    for (int i=0; i<5; i++) {
        if (num[i]%2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("%d %d", even, odd);
    
    return 0;
}
