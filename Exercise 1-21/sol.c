#include <stdio.h>

#define TAB_SIZE 4  // Define tab stop width

void entab(int tab_size) {
    int c, space_count = 0, pos = 0, tab_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            space_count++;
        } else {
            if (space_count > 0) {
                // Convert spaces to tabs and remaining spaces
                int tabs = (pos - space_count) / tab_size;
                int remaining_spaces = space_count % tab_size;

                // Insert tabs
                for (int i = 0; i < tabs; i++) {
                    putchar('\t');
                }
                // Insert remaining spaces
                for (int i = 0; i < remaining_spaces; i++) {
                    putchar(' ');
                }

                space_count = 0;  // Reset space counter
            }

            putchar(c);

            // Reset position tracking
            if (c == '\n') {
                pos = 0;
            } else if (c == '\t') {
                pos += tab_size - (pos % tab_size);
            } else {
                pos++;
            }
        }
    }
}

int main() {
    entab(TAB_SIZE);
    return 0;
}
