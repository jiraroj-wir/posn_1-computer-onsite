#include <stdio.h>

int strlen(char str[]) {
    int i=0; 
    do {
        i++; 
    } while (str[i] != '\0');
    
    return i;
}

int main(int argc, char **argv) {
    char ch[] = "0123456789ABCDEF";
    unsigned short int base;
    printf("Base\t\t");
    scanf("%hu", &base);

    char num1[100000], num2[100000];
    printf("Num1\t\t");
    scanf(" %[^\n]", num1);
    printf("Num2\t\t");
    scanf(" %[^\n]", num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int max_len = (len1 > len2) ? len1 : len2;
    int ans_in = 0;
    char ans[max_len + 2];

    int carry = 0;

    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) {
        int num1_digit = (i >= 0) ? (num1[i] >= 'A' ? num1[i] - 55 : num1[i] - '0') : 0;
        int num2_digit = (j >= 0) ? (num2[j] >= 'A' ? num2[j] - 55 : num2[j] - '0') : 0;

        int temp = num1_digit + num2_digit + carry;
        carry = temp / base;
        temp = temp % base;

        ans[ans_in++] = ch[temp];
    }

    if (carry > 0) {
        ans[ans_in++] = ch[carry];
    }

    ans[ans_in] = '\0';

    for (int i = 0, j = ans_in - 1; i < j; i++, j--) {
        char temp = ans[i];
        ans[i] = ans[j];
        ans[j] = temp;
    }

    printf("Output\t\t%s\n", ans);

    return 0;
}

