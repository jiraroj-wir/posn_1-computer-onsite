#include <stdio.h>

void strcpy(char str2[], char str1[]);

int main() {
    char str1[] = "Sample string";
    char str2[40];
    char str3[40];
    strcpy (str2, str1);
    strcpy (str3, "copy successful");
    printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
    
    return 0;
}

void strcpy(char str2[], char str1[]) {
    int i = 0;
    do {
        str2[i] = str1[i]; 
        i++;
    } while (str1[i] != '\0');
}
