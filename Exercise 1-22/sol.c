#include <stdio.h>


int fold() {
    int c=0, empty=0, word_counter=0,column=0;
    while((c = getchar()) != EOF) {
        if (c!=' ' && c!='\t')
        {
            putchar(c);
            column++;
            empty=0;
            
        }
        else if(c=='\n'){
            putchar(c);
            column=0;
            word_counter=0;
            empty=1;
            }
        else{
            if(empty==0){
                word_counter++;
                putchar(c);
                column++;
                if(word_counter==3 || column==10){
                    putchar('\n');
                    word_counter=0;
                    column=0;
                    empty=1;
                }
                }

                
            }
        
    }
}

int main(){
    fold();
    return 0;
   
}
