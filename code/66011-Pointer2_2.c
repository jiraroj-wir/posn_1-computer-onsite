#include <stdio.h>

int strlen(char str[]) {
    int count = 0;
    do {
        count++; 
    } while (str[count] != '\0');
    
    return count;
}

int main(int argc, char *argv[]) {
    char ch[1000000];
    scanf("%[^\n]", ch);
    
    for (int i=0; i<strlen(ch); i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i]-=32;
        }    
        printf("%c", ch[i]);
    }
    
    return 0;
}
