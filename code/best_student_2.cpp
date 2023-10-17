#include <stdio.h>

typedef struct {
    char ID[9];
    char name[31];
    char surname[51];
    float grade;
} data;

int best_student(data student[], unsigned short int size) {
    int best_student = 0;
    for (int i=1; i<size; i++) {
        if (student[best_student].grade < student[i].grade) {
            best_student = i; 
        }
    }
    
    return best_student;
}

int main(int argc, char *argv[]) {
    unsigned short int N;
    scanf("%hu", &N);
    data student[N];
    for (int i=0; i<N; i++) {
        scanf(" %8s %30s %50s %f", student[i].ID, student[i].name, student[i].surname, &student[i].grade);
    }
    int best = best_student(student, N);
    printf("%s %s %s %.2f", student[best].ID, student[best].name, student[best].surname, student[best].grade);
    
    return 0;
}		
