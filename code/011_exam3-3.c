#include <stdio.h>

int main() {
    char ch[1000000];
    int count = 0;
    int num_count = 0;
    while (1) {
        scanf("%c", &ch[count]);
        if (ch[count] == '\n') {
            ch[count] = '\0';
            break;
        }
        if (ch[count] >= '0' && ch[count] <= '9') {
            num_count++;
        }
        count++;
    }
    
    printf("%d", num_count);
    
    return 0;
}
