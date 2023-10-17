#include <stdio.h>

int main() {
    printf("Enter text: ");
    unsigned short int num = 0, cap = 0, nml = 0, spc = 0;
    char ch[1000000];
    int i = 0;
    do {
        scanf("%c", &ch[i]); 
        if (ch[i] == '\n') {
            ch[i] = '\0';
            break;
        }
        
        if (ch[i] >= '0' && ch[i] <= '9') {
            num++;
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z') {
            cap++;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z') {
            nml++;
        }
        else {
            spc++;
        }
        
        i++;
    } while (1);
    
    printf("#0-9=%hu\n#A-Z=%hu\n#a-z=%hu\n#special characters =%hu", num, cap, nml, spc);
    
    return 0;
}
