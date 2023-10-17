#include <stdio.h>

int custom_strlen(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char ch[1000];
    scanf("%[^\n]", ch);

    unsigned int count = 0;

    int length = custom_strlen(ch);

    for (int i = 0; i < length; i++) {
        if (ch[i] % 2 == 1) {
            count++;
        }
    }

    printf("%u", count);

    return 0;
}	
