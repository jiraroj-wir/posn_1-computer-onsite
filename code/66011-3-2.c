#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Sieve of Eratosthenes

int main() {
    printf("Enter +N = ");
    int n;
    scanf("%d", &n);
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    prime[0] = false, prime[1] = false;
    int i, j;
    for (i=2; pow(i, 2)<=n; i++) {
        if (prime[i] == true) {
            for (j=pow(i, 2); j<=n; j+=i) {
                prime[j] = false;
            }
        }
    }

    if (prime[n] == true) {
        printf("%d is a prime number\n", n);
    }
    else {
        printf("%d is not a prime number\n", n);
    }
    
    return 0;
}

