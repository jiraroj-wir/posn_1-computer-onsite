#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char ID[9];
    char name[31];
    char surname[51];
    int year;
} data;

int main(int argc, char *argv[]) {
    int N, find_year;
    scanf("%d", &N);
    data *student = (data*)malloc(N * sizeof(data));
    
    for (int i=0; i<N; i++) {
        scanf("%8s %30s %50s %d", student[i].ID, student[i].name, student[i].surname, &student[i].year);
    }
    
    scanf("%d", &find_year);
    bool None = true;
    for (int i=0; i<N; i++) {
        if (student[i].year == find_year) {
            printf("%s %s %s\n", student[i].ID, student[i].name, student[i].surname);
            None = false;
        }
    }
    if (None == true) {
        printf("None");
    }
    
    free(student);
    return 0;
}
