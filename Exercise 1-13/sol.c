#include <stdio.h>


void word_hist() {
    int c=0;
    int nchars[100]={0};
    int word_counter=0;
    int in_word = 0;
     
    while ((c = getchar()) != EOF)
    {
        if (c==' ' || c=='\t' || c=='\n')
        {
            if (in_word)
            {
                ++word_counter;
                in_word = 0;
            }
        
        if (c =='\n')
        {
            for (int i = 0; i < word_counter; i++)
            {
                for (int j = 0; j <= nchars[i]; j++)
                {
                    putchar('*');
                }
                putchar('\n');
            }
            // Reset values for the next line
            word_counter = 0;
            for (int i = 0; i < 100; i++) {
                nchars[i] = 0;
            }   
        }
        }
        else
        {
            if (!in_word)
            {
                in_word = 1;
            }
            else
            {
            nchars[word_counter]++;
            }
        }
    }

}

int main() {
    word_hist();
    return 0;
}