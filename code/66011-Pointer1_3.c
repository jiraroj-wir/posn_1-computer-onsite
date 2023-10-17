#include <stdio.h>
#include <stdbool.h>

bool larger(unsigned int *num1, unsigned int *num2) {
    if (*num1 > *num2) {
        return true;
    }
    else {
        return false;
    }
}

int main(int argc, char *argv[]) {
    unsigned int num1, num2;
    printf("Input the first number : ");
    scanf("%u", &num1);
    printf("Input the second number : ");
    scanf("%u", &num2);
    
    unsigned int *pt_1 = &num1, *pt_2 = &num2;
    printf("%d is the maximum number", (larger(pt_1, pt_2) == true) ? *pt_1 : *pt_2);
    
    return 0;
}
