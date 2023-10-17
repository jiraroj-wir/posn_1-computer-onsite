#include <stdio.h>

int main() {
    unsigned short int s_d, d_m;
    scanf("%hu%hu", &s_d, &d_m);
    printf("Sun    Mon    Tue    Wed    Thu    Fri    Sat\n");
    for (int s=1; s<s_d; s++) {
        printf("       ");
    }
    unsigned short int day = s_d - 1;
    for (int i=1; i<=d_m; i++) {
        if (i < 10) {
            printf("%d      ", i);
        }
        else {
            printf("%d     ", i);
        }
        day++;
        if (day == 7) {
            printf("\n");
            day = 0;
        }
    }
    
    return 0;
}
