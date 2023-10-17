#include <stdio.h>

int main() {
    char str[1000001];
    fgets(str, 1000000, stdin);
    unsigned short int arr[128] = {0};
    
    for (int i=0; str[i] != '\0' && str[i] != '\n'; i++) {
        arr[str[i]]++;
    }
    
    for (int j=0; j<128; j++) {
        if (arr[j] != 0) {
            char j_c = j;
            printf("'%c'=%hu\n", j_c, arr[j]);
        } 
    }
    
    return 0;
}
