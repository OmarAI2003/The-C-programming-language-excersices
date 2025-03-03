#include <stdio.h>

#define TAB_WIDTH 4  // Change this to modify the tab width

void detab() {
    int c, pos = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            int spaces = TAB_WIDTH - (pos % TAB_WIDTH);
            for (int i = 0; i < spaces; i++) {
                putchar(' ');
                pos++;
            }
        } else {
            putchar(c);
            pos++;
            if (c == '\n') {
                pos = 0;
            }
        }
    }
}

int main() {
    detab();
    return 0;
}
