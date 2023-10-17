#include <stdio.h>

typedef struct {
    char name[10];
    char sex;
    unsigned short int height;
    unsigned short int weight;
} info;

int main() {
    info dataset[10] = {{"siri", 'M', 175, 54}, 
                        {"nadet", 'F', 160, 65}, 
                        {"pranee", 'M', 158, 48}, 
                        {"wichai", 'F', 160, 60},
                        {"somchai", 'F', 180, 70},
                        {"wichaya", 'M', 163, 56},
                        {"manee", 'M', 162, 55},
                        {"arthit", 'F', 170, 63},
                        {"vittaya", 'F', 175, 62},
                        {"chujai", 'M', 159, 43}};
    
    unsigned int sum_height_male = 0, sum_height_female = 0;
    unsigned short int f_count = 0, m_count = 0;
    for (int i=0; i<10; i++) {
        if (dataset[i].sex == 'F') {
            sum_height_female+=dataset[i].height;
            f_count++;
        }
        else {
            sum_height_male+=dataset[i].height;
            m_count++;
        }
    }
    
    printf("Average height (female) : %.3f\n", (float)sum_height_female/f_count);
    printf("Average height (male) : %.3f\n", (float)sum_height_male/m_count);
    
    // Individual's BMI
    for (int j=0; j<10; j++) {
        printf("%s\t(%c)\theight : %hu\tweight : %hu\t|BMI : %.3f\n", dataset[j].name, dataset[j].sex, dataset[j].height, dataset[j].weight, (float)(dataset[j].weight/((dataset[j].height/100)*(dataset[j].height/100))));
    }
    
    return 0;
}
