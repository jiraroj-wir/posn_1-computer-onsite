#include <stdio.h>

typedef struct {
    char name[50];
    char surname[50];
    unsigned short int result[10];
} database;

void swap(unsigned short int *xp, unsigned short int *yp) {
    unsigned short int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(unsigned short int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(int argc, char *argv[]) {
    unsigned short int M, N;
    scanf("%hu %hu", &M, &N);
    database dataset[M];

    float avg[M];
    for (int i = 0; i < M; i++) {
        scanf("%50s %50s", dataset[i].name, dataset[i].surname);
        for (int j = 0; j < N; j++) {
            scanf(" %hu", &dataset[i].result[j]);
        }
        bubble_sort(dataset[i].result, N);
        int sum = 0;
        for (int k = 0; k < N - 1; k++) {
            sum += dataset[i].result[k];
        }	
        avg[i] = (float)10*sum / (N - 1);
    }

    unsigned int pass;
    scanf("%u", &pass);

    for (int l = 0; l < M; l++) {
        if (avg[l] >= pass) {
            printf("%s %s\n", dataset[l].name, dataset[l].surname);
        }
    }

    return 0;
}

