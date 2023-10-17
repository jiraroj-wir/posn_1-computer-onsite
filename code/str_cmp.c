#include <stdio.h>
#include <string.h>

int my_strcmp(char str1[], char str2[]);

int main() {
    char str1[80] = "Hello";
    char str2[80] = "hello";
    int cmp;
    cmp = my_strcmp(str1, str2);
    printf("%d\n", cmp);

    return 0;
}

int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) {
                return 1;
            } else if (str1[i] < str2[i]) {
                return -1;
            }
        }
        i++;
    }
    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}
