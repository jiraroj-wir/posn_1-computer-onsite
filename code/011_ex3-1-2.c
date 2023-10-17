#include <stdio.h>

int main() {
    printf("Please Enter Character : ");
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        ch -= 32;
    }
    for (int i = 'A'; i <= ch; i++) {
        printf("%c ", i);
    }
    printf("\n");
    for (int j = 'a'; j <= ch+32; j++) {
        printf("%c ", j);
    }
    printf("\n");

    int len = ch - 'A' + 1;
    int flag = 0;
    if (len % 2 == 0) {
        flag = 1;
    }
    
    for (int k = 0; k < len; k++) {
        if ((flag == 0 && k == (len - 1) / 2) || (flag == 1 && k == len / 2)) {
            printf("%d ", len);
        } else {
            printf("- ");
        }
    }

    return 0;
}
