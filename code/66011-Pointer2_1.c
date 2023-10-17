#include <stdio.h>
#include <stdbool.h>

int strlen(char str[]) {
    int count = 0;
    do {
        count++; 
    } while (str[count] != '\0');
    
    return count;
}
void push(unsigned short int *pt, char *str, int len) {
    for (int i=0; i<len; i++) {
        pt[str[i]]++;
    } 
}
void pull(unsigned short int *pt, char *str, int len) {
    for (int i=0; i<len; i++) {
        pt[str[i]]--;
    }
}

bool is_anagram(unsigned short int *pt) {
    for (int i=0; i<128; i++) {
        if (pt[i] != 0) {
            return false;
        } 
    }
    
    return true;
}

int main(int argc, char *argv[]) {
    unsigned short int ch[128] = {0};
    char str1[100000], str2[100000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    if (str1[strlen(str1)] == '\n') {
        str1[strlen(str1)] = '\0';
    }
    if (str2[strlen(str2)] == '\n') {
        str2[strlen(str2)] = '\0';
    }
    
    push(ch, str1, strlen(str1));
    pull(ch, str2, strlen(str2));
    printf("%s", (is_anagram(ch) == true) ? "yes" : "no");
    
    return 0;
}
