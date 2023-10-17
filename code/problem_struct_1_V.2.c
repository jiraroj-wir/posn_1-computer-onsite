#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int ID;
    float GPA;
} database;

int main(int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    
    database suriyothai[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %f", &suriyothai[i].ID, &suriyothai[i].GPA);
    }

    float requirement;
    scanf("%f", &requirement);
    
    bool none = true; 
    for (int j = 0; j < N; j++) {
        if (suriyothai[j].GPA >= requirement) {
            printf("%d\n", suriyothai[j].ID);
            none = false;
        }
    }
    
    if (none == true) {
        printf("None");
    }

    return 0;
}

