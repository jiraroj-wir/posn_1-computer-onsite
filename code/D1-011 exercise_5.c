#include <stdio.h>

int main() {
    int y_1;
    scanf("%d", &y_1);
    int y_2 = y_1 + 543;
    printf("%d\n", y_2);
    int n1 = y_1;
    int n2 = y_2;
    do {    // from backward
        if (n1 == 0 && n2 == 0) {
            break;
        }
        printf("%d\n", (n1%10)+(n2%10));
        n1 = (n1 - (n1 % 10)) / 10;
        n2 = (n2 - (n2 % 10)) / 10;

    } while (1);
    
    return 0;
}
