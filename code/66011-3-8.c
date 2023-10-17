#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

bool check_prime(int n);

int main() {
    int num; 
    int prime_cnt = 0, max_prime = 0;
    do {
        printf("Enter Number : ");
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (check_prime(num) == true) {
            prime_cnt++; 
            if (max_prime == 0) {
                max_prime = num;
            }
            else {
                if (num > max_prime) {
                    max_prime = num;
                }
            }
        }
        
    } while (1);
    if (max_prime == 0) {
        printf("Max prime : None\nCount prime : 0");
    }
    else {
        printf("Max prime : %d\nCount prime : %d", max_prime, prime_cnt);
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
