#include <stdio.h>

float smaller(float w, float s) {
    return (w < s) ? w : s;
}

void green_tea(unsigned int water, unsigned int sugar) {
    float w = (float)water / 250.0;
    float s = (float)sugar / 15.0;
    printf("%u ", (unsigned int)smaller(w, s));
    if (smaller(w, s) == s && ((float)water / 250.0) != 0.0) {
        printf("water");    
    }
    printf("\n");
}

int main() {
    unsigned int water, sugar;
    unsigned short int i = 1;
    do {
        scanf(" %u %u", &water, &sugar);
        green_tea(water, sugar);
        i++;
    } while (i != 7);
    
    return 0;
}
	
