#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch+=32;
        printf("%c", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        ch-= 32;
        printf("%c", ch);
    }
    else {
        printf("error");
    }
    
    return 0;
}
