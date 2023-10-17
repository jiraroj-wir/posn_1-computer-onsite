#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

bool check_prime(int n);

int main() {
    int num; 
    float all = 0, occ_p = 0;
    do {
        printf("Enter Number : ");
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (check_prime(num) == true) {
             occ_p++;
        }
        all++;
        
    } while (1);
    
    float prime_occurrences = occ_p/all;
    printf("Average : ");
    if (prime_occurrences == 0) {
        printf("None");
    }
    else {
        printf("%.2f", prime_occurrences);
    }
    
    return 0;
}

bool check_prime(int n) {
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
        return 1;
    }
    else {
        return 0;
    }
}
