#include <string.h>
#include "p1_line.h"
#include "p1_word.h"

#define MAX_WORD_LEN 20

int main(void){
    char word[MAX_WORD_LEN+2];
    int word_len;
    
    clear_line();
    while(1){
        read_word(word, MAX_WORD_LEN+1);
        word_len = strlen(word);
    
        if(word_len == 0){
            flush_line();
            return 0;
        }

        if(word_len > MAX_WORD_LEN){
            word[MAX_WORD_LEN] = '*';
        }

        if(word_len + 1 > space_remaining()){
            write_line();
            clear_line();
        }
        add_word(word);
    }



}