#include <stdio.h>

int main() {
    char alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned short int num;
    scanf("%hu", &num);
    int new_ln = 1, count = 0;
    for (int i=0; i<num; i++) {
        printf("%c", alphabet[i%26]);
        count++;
        if (count == new_ln) {
            printf("\n");
            count = 0;
            new_ln++;
        }
    }
    
    return 0;
}
