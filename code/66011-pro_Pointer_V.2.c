#include <stdio.h>

int strlen(char str[]) {
    unsigned int s_len = 0;
    do {
        s_len++; 
    } while (str[s_len] != '\0');
    
    return s_len;
}

int is_palindrome(char str[], unsigned int len) {
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}


int main() {
    unsigned short int n;
    scanf("%hu", &n);
    
    char str[1001];
    for (int i=0; i<n; i++) {
        scanf(" %[^\n]", str);
        unsigned int len = strlen(str);
        printf("%s\n", (is_palindrome(str, len) == 1) ? "yes" : "no");
    }
    
    return 0;
}
