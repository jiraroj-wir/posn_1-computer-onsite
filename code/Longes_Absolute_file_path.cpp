	#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char directory[10001];
    fgets(directory, sizeof(directory), stdin);
    int len = strlen(directory);
    if (directory[len-1] == '\n') {
        directory[len-1] = '\0';
    }
    char *file_exist = strstr(directory, ".ext");
    if (!file_exist) {
        goto NO_FILE_IN_SYSTEM;
    }
    
    NO_FILE_IN_SYSTEM:
    
    return 0;
}			
