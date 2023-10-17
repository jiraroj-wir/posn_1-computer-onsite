#include <stdio.h>

int main(int argc, char *argv[]) {
    int a[5] = {0, 1, 2, 4, 0};
    int b[5] = {0, 0, 7, 9, 5};
    
    int *pt1 = &a[0];
    int *pt2 = &b[0];
    unsigned int dec_a = 0, dec_b = 0;
    
    for (int i=0; i<5; i++) {
        dec_a*=10;
        dec_a+=*pt1;
        dec_b*=10;
        dec_b+=*pt2;
        pt1++;
        pt2++;
    }
    
    printf("%u", dec_a+dec_b);
    
    return 0;
}
