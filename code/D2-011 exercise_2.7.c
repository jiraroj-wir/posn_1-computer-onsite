#include <stdio.h>
#include <math.h>

int main() {
    float rad;
    printf("Please input radius : ");
    scanf("%f", &rad);
    printf("Calculator Menu :\n\t\t1.Find area\n\t\t2.Find circumference\nChoose menu : ");
    unsigned short int c_m;
    scanf("%hu", &c_m);
    float ans;
    if (c_m == 1) {
        printf("%.2f", M_PI*pow(rad, 2));
    }
    else if (c_m == 2) {
        printf("%.2f", 2*M_PI*rad);
    }
    
    return 0;
}
