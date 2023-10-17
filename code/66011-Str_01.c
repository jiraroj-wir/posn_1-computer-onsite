#include <stdio.h>

int main() {
    char str[21];
    fgets(str, 21, stdin);
    
    char cpy[21];
    for (int j=0; j<21; j++) {
        cpy[j] = str[j];
    }
    unsigned short int count_a = 0;
    for (int i=0; i<21; i++) {
        if (str[i] == '\0') {
            break;
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count_a++;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i]-=32;
        }
    }
    printf("%hu\n\n", count_a);
    printf("%s", str);
    
    for (int k=20; k>=0; k--) {
        if (cpy[k] == '\0') {
            continue;
        }
        else {
            printf("%c", cpy[k]);
        }
    } 
    
    return 0;
}
