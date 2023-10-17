 #include <stdio.h>
 
 int main(int argc, char **argv) {
    unsigned short int K, N;
    scanf("%hu%hu", &K, &N);
    unsigned int a, day;
    unsigned long long int sum = 0;
    for (int i=0; i<N; i++) {
        scanf("%u", &a);
        sum+=a;
        day = sum/(100*K);
        if (sum % (100*K) != 0) {
            day++;
        }
        printf("%u\n", day);
    }
    
    return 0;
 }
