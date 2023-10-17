#include <stdio.h>

int main() {
    int num;
    int count = 0;
    do {
        printf("Enter Number : ");
        scanf("%d", &num);
        if (num % 5 == 0) {
            count++;
        }
        if (num == 0) {
            break;
        }
    } while (1);
    
    if (count == 0) {
        printf("None");
    }
    else {
        printf("Counr Div 5 : %d", count-1);
    }
    
    return 0;
}
