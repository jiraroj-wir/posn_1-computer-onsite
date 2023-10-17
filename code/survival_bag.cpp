#include <stdio.h>

void survival_bag(unsigned int *x, unsigned int *y, unsigned int *z) {
    unsigned int least = (*x/3 < *y/4) ? (*x/3 < *z/2 ? *x/3 : *z/2) : (*y/4 < *z/2 ? *y/4 : *z/2);
    printf("%u %u %u %u", least, *x-least*3, *y-least*4, *z-least*2);
}

int main() {
    unsigned int x, y, z;
    scanf("%u %u %u", &x, &y, &z);
    survival_bag(&x, &y, &z);
    
    return 0;
}
