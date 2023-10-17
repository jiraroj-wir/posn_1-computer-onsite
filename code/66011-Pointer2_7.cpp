#include <stdio.h>

int strlen(char str[]) {
    int count = 0;
    do {
        count++; 
    } while (str[count] != '\0');
    
    return count;
}

int strstr(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    for (int i=0; i<=len1-len2; i++) {
        int flag = 1;
        for (int j=0; j<len2; j++) {
            if (flag == 0) {
                break;
            }
            if (str1[i+j] != str2[j]) {
                flag = 0;
            }
            if (j == len2-1 && flag == 1) {
                if (str2[j] == str1[i+j]) {
                    return i+1;
                }
            }
        }
    }
    
    return 0;
}

int main(int argc, char *argv[]) {
    char str[10000], f_str[100];
    scanf("%[^\n] %[^\n]", str, f_str);
    printf("%d", strstr(str, f_str));
    
    return 0;
}
