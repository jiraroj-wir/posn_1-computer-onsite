#include <stdio.h>

int strlen(char str[]);

int main() {
    char str1[] = "Sample string";
    int len;
    len = strlen(str1);
    printf("%d", len);
    
    return 0;
}

int strlen(char str[]) {
    int count = 0;
    do {
        count++; 
    } while (str[count] != '\0');
    
    return count;
}
