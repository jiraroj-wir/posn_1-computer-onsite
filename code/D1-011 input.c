#include <stdio.h>

int main() {
    char num[4], name[100], surname[100], nick_name[20];
    scanf("%3s%99s %99s%19s", num, name, surname, nick_name);
    printf("Number : %s\n", num);
    printf("Name : %s-%s\n", name, surname);
    printf("Nickname : %s\n", nick_name);
    
    return 0;
}
