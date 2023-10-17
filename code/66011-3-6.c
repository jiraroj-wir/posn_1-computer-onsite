#include <stdio.h>

int main() {
    unsigned short int s_d, d_m;
    scanf("%hu%hu", &s_d, &d_m);
    printf("Sun    Mon    Tue    Wed    Thu    Fri    Sat\n");
    for (int s=1; s<s_d; s++) {
        printf("       ");
    }
    unsigned short int day_1 = s_d - 1;
    for (int i=1; i<=d_m; i++) {
        if (i < 10) {
            printf("%d      ", i);
        }
        else {
            printf("%d     ", i);
        }
        day_1++;
        if (day_1 == 7) {
            printf("\n");
            day_1 = 0;
        }
    }
    s_d = day_1 + 1;
    
    printf("\n\nSun    Mon    Tue    Wed    Thu    Fri    Sat\n");
    for (int s=1; s<s_d; s++) {
        printf("       ");
    }
    unsigned short int day_2 = s_d - 1;
    for (int i=1; i<=d_m; i++) {
        if (i < 10) {
            printf("%d      ", i);
        }
        else {
            printf("%d     ", i);
        }
        day_2++;
        if (day_2 == 7) {
            printf("\n");
            day_2 = 0;
        }
    }
    s_d = day_2 + 1;
    
    printf("\n\nSun    Mon    Tue    Wed    Thu    Fri    Sat");
    for (int s=1; s<s_d; s++) {
        printf("       ");
    }
    unsigned short int day_3 = s_d - 1;
    for (int i=1; i<=d_m; i++) {
        if (i < 10) {
            printf("%d      ", i);
        }
        else {
            printf("%d     ", i);
        }
        day_3++;
        if (day_3 == 7) {
            printf("\n");
            day_3 = 0;
        }
    }
    
    return 0;
}
