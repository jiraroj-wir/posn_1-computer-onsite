#include <stdio.h>

int main() {
    for (int i=2; i<=12; i+=2) {
        printf("9 x %d = %d\n9 x %d = -\n", i, 9*i, i+1);
    }
    
    return 0;
}
