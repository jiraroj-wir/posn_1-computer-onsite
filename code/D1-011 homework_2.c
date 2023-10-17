#include <stdio.h>

int main() {
    int cash;
    scanf("%d", &cash);
    int thousands, five_hundreds, hundreds, fifty, twenty;
    thousands = cash / 1000;
    cash -= thousands*1000;
    five_hundreds = cash / 500;
    cash -= five_hundreds*500;
    hundreds = cash / 100;
    cash -= hundreds*100;
    fifty = cash / 50;
    cash -= fifty*50;
    twenty = cash / 20;
    cash -= twenty;
    printf("B1000 = %d\nB500 = %d\nB100 = %d\nB50 = %d\nB20 = %d\n", thousands, five_hundreds, hundreds, fifty, twenty);
    if (cash != 0) {
	    printf("\n+ some change coin");
	}
        return 0;
}
