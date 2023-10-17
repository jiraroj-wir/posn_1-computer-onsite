#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_prime(int num);
void decToBinary(int n);

int main() {
    unsigned short int n;
    scanf("%hu", &n);
    
    int check = 2, i = 1;
    do {
        if (is_prime(check) == true) {
            decToBinary(check);
            printf(" ");
            i++;
        }
        check++; 
    } while (i <= n);
    
    return 0;
}

bool is_prime(int num) {
    static bool prime[1000000] = {false};
    static bool initialized = false;
    
    if (!initialized) {
        memset(prime, true, sizeof(prime));
        prime[0] = prime[1] = false;
        
        for (int i = 2; i * i <= 1000000; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= 1000000; j += i) {
                    prime[j] = false;
                }
            }
        }
        
        initialized = true;
    }
    
    return prime[num];
}

void decToBinary(int n)
{
    int binaryNum[64];
  
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
  
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
