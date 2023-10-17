#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ID[9];
    char name[31];
    char surname[51];
    float GPA;
} data;

int main(int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    data *database = (data*)malloc(N * sizeof(data));
    
    float best[2];
    for (int i=0; i<N; i++) {
        scanf(" %8s %30s %50s %f", database[i].ID, database[i].name, database[i].surname, &database[i].GPA);
        if (i == 0) {
            best[0] = database[i].GPA;
            best[1] = i;
        }
        if (database[i].GPA > best[0]) {
            best[0] = database[i].GPA;
            best[1] = i;
        }
    }
    
    printf("%s %s %s %.2f", database[(int)best[1]].ID, database[(int)best[1]].name, database[(int)best[1]].surname, database[(int)best[1]].GPA);
    
    free(database);
    
    return 0;
}
