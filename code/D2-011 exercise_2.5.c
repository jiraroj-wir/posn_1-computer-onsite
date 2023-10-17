#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int output = N%10;
    
    char *numbers[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    printf("%s", numbers[output]);
    
    return 0;
}
