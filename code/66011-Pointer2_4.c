#include <stdio.h>

int strlen(char str[]) {
    unsigned int s_len = 0;
    do {
        s_len++; 
    } while (str[s_len] != '\0');
    
    return s_len;
}

int main(int argc, char *argv[]) {
    printf("Test Data : \n");
    printf("\tInput a string : ");
    char str[100000];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }
    
    printf("Expected Output : \n");
    printf("\tReverse of the string is : ");
    
    char *pt = &str[strlen(str)-1];
    do {
        printf("%c", *pt);
        pt--;
    } while (*pt);
    
    return 0;
}
