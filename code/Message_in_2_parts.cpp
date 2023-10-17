#include <stdio.h>
#include <string.h>

typedef struct {
    char word[100];
} data;

int m_strlen(char str[]) {
    int i=0;
    do {
        i++; 
    } while (str[i] != '\0');
    
    return i;
}

int main() {
    char str[10000];
    data mf[2000];
    data ms[2000];
    
	fgets(str, sizeof(str), stdin);
    int len = m_strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
    }
    
    size_t length = m_strlen(str);
    int split = (int)length/2;
    if (length % 2 != 0) {
    	split++;	
	}
	
    for (int i=0; i<length; i++) {
        if (i == split) {
        	printf(" | ");
		}
        printf("%c", str[i]);
    }
    
    printf("\n");
    
    char f_half[split+1], s_half[split+1];
    int mf_cnt = 0, mf_wc = 0;
    for (int i=0; i<split; i++) {
        f_half[i] = str[i];
        if (f_half[i] != ' ') {
            mf[mf_cnt].word[mf_wc] = f_half[i];
            mf_wc++;
        }
        else {
            mf_cnt++;
            mf_wc = 0;
        }
    }
    f_half[split] = '\0';

    int ms_cnt = 0, ms_wc = 0;
    for (int i = split; i < length; i++) {
        s_half[i - split] = str[i];
        if (str[i] != ' ') {
            ms[ms_cnt].word[ms_wc] = str[i];
            ms_wc++;
        } 
        else {
        ms[ms_cnt].word[ms_wc] = '\0';
        ms_cnt++;
        ms_wc = 0;
        }
    }
    s_half[length - split] = '\0';
    
    for (int i=26; i>0; i--) {
        for (int j=0; mf[j].word[0] != '\0'; j++) {
            if (mf[j].word[0] == 'A' + i - 1 || mf[j].word[0] == 'a' + i - 1) {
                printf("%s ", mf[j].word);
            }    
        }
    }
    
    printf("|");
    
    for (int i=0; i <= 26; i++) {
        for (int j=0; ms[j].word[0] != '\0'; j++) {
            if (ms[j].word[0] == 'A' + i || ms[j].word[0] == 'a' + i) {
                printf(" %s", ms[j].word);
            }
        }
    }
    
    return 0;
}
