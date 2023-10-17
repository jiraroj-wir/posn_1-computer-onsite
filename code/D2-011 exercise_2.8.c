#include <stdio.h>
#include <math.h>
#include <assert.h>

int main() {
    float area;
    scanf("%f", &area);
    assert(area > 0);
    if (area < 80) {
        printf("%f", area*12.50);
    }
    else if (area >=80 && area <=200) {
        printf("%f", area*10);
    }
    else if (area > 200 && area <= 400) {
        printf("%f", area*7.50); 
    }
    else {
        printf("%f", area*5);
    }
    
    return 0;
}
