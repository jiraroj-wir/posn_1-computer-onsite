#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    char name[31];
    unsigned int points;
} data;

int main(int argv, char *argc[]) {
    data *contestant = (data*)malloc(8 * sizeof(data));
    for (int i=0; i<8; i++) {
        scanf(" %s", contestant[i].name);
        contestant[i].points = 0;
    }
    unsigned short int vote, i_vote;
    scanf("%hu", &vote);
    for (int i=0; i<vote; i++) {
        scanf("%hu", &i_vote);
        contestant[i_vote-1].points++;
    }
    
    // bubble sort contestant[n].points
    for (int i=0; i<8; i++) {
        for (int j=0; j<8-i-1; j++) {
            if (contestant[j].points > contestant[j+1].points) {
                data temp = contestant[j];
                contestant[j] = contestant[j+1];
                contestant[j+1] = temp;
            }
        }
    }
    
    unsigned short int del_cnt = 1;
    for (int i=0; i<8; i++) {
        if (contestant[i].points == contestant[i+1].points) {
            del_cnt++; 
        } 
        else {
            break;
        }
    }   
    
    for (int i=del_cnt; i<8; i++) {
        printf("%s\n", contestant[i].name);
    }
    
    free(contestant);
    return 0;
}
