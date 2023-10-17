#include <stdio.h>

int main() {
    printf("Please Enter Character : ");
    char ch;
    scanf("%c", &ch);
    for (int i='A'; i<=ch; i++) {
        printf("%c ", i);
    }
    
    return 0;
}
