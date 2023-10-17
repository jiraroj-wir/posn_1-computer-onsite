#include <stdio.h>

void decToBinary(unsigned int n)
{
	int binaryNum[32];
	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d", binaryNum[j]);
    printf("\n");
}

int main()
{
    unsigned short int amount;
    scanf("%hu", &amount);
    int i = 1;
    unsigned int n;
    do {
        scanf(" %u", &n);
        decToBinary(n);
        if (i == amount) {
            break;
        }
        i++;
    } while (1);
	return 0;
}
