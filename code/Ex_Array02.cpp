#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_prime(int num);

int main() {
    unsigned short int n;
    scanf("%hu", &n);
    
    int check = 2, i = 1;
    do {
        if (is_prime(check) == true) {
            printf("%d ", check);
            i++;
        }
        check++; 
    } while (i <= n);
    
    return 0;
}

bool is_prime(int num) {
    static bool prime[10000000] = {false};
    static bool initialized = false;
    
    if (!initialized) {
        memset(prime, true, sizeof(prime));
        prime[0] = prime[1] = false;
        
        for (int i = 2; i * i <= 10000000; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= 10000000; j += i) {
                    prime[j] = false;
                }
            }
        }
        
        initialized = true;
    }
    
    return prime[num];
}

