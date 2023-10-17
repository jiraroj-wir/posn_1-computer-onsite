#include <stdio.h>

int main() {
    int height, base;
    scanf("%d %d", &height, &base);
    float ans = 0.5*height*base;
    printf("%.2f", ans);
    
    return 0;
}
