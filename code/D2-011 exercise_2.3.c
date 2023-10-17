#include <stdio.h>

int main() {
    char id[6];
    double income;
    scanf("%5c%lf", id, &income);
    if (income >= 100000) {
        printf("%lf", income*1.1);
    }
    else if (income < 100000 && income >= 70000) {
        printf("%lf", income*1.07);
    }
    else if (income < 70000 && income >= 50000) {
        printf("%lf", income*1.05);
    }
    else if (income < 50000 && income >= 30000) {
        printf("%lf", income*1.03);
    }
    else {
        printf("%lf", income*1.01);
    }
    
    return 0;
}
