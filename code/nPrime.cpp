#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool prime[1000000];

bool is_prime(unsigned int *n) {
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    
    for (int i=2; i*i<sizeof(prime); i++) {
        for (int j=i*i; j<sizeof(prime); j+=i) {
            if (prime[j] == true) {
                prime[j] = false;
            }
        }
    } 
    
    return prime[*n];
}

void print_prime(unsigned int n) {
    for (int i=2; i<=n; i++) {
        if (prime[i] == true) {
            printf("%d ", i);
        }
    }
}

int main(int argc, char *argv[]) {
    unsigned int n;
    scanf("%u", &n);
    printf("%s\n", (is_prime(&n) == true) ? "yes" : "no");
    print_prime(n);
    
    return 0;
}	
