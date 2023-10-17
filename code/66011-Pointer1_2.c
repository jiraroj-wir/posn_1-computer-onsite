#include <stdio.h>

int strlen(char str[]) {
    int count = 0;
    do {
        count++; 
    } while (str[count] != '\0');
    
    return count;
}

int count_vowels(char *str, int len) {
    int v_count = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == '\0') {
            return v_count;
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            v_count++;
        }
    }
    return v_count;
}


int main(int argc, char *argv[]) {
    printf("Input a string : ");
    char str[10000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len] == '\n') {
        str[len] = '\0';
    }
    
    unsigned short int vowels = count_vowels(str, len);
    printf("Number of vowels : %hu\nNumber of constant : %hu", vowels, (unsigned short int) (len-vowels-1));
    
    return 0;
}
