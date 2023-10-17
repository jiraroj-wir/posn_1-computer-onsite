#include <stdio.h>
    
void strcat(char str[], char cat[]);
void strcpy(char str2[], char str1[]);
int strlen(char str[]);
    
int main() {
    char str[80];
    strcpy(str, "these ");
    strcat(str, "strings ");
    strcat(str, "are ");
    strcat(str, "concatenated. ");
    puts(str);
        
    return 0;
}
    
int strlen(char str[]) {
    int count = 0;
    do {
        count++; 
    } while (str[count] != '\0');
        
    return count;
}
    
void strcat(char str[], char cat[]) {
    int len = strlen(str);
    int cat_len = strlen(cat);
    for (int i=0; i<cat_len; i++) {
        str[len+i] = cat[i];
    }
    str[len+cat_len] = '\0';
}
    
void strcpy(char str2[], char str1[]) {
    int i = 0;
    do {
        str2[i] = str1[i]; 
        i++;
    } while (str1[i] != '\0');
}

