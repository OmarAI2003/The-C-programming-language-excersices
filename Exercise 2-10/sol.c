#include "stdio.h"
 /* lower: convert c to lower case; ASCII only */
 int lower(int c)
 {
    return (c >='A' && c <= 'Z') ? (c + 'A' - 'a') : c;
 }

int main() {
    int x = 1;
    int n = 1;

    printf(" %c \n", lower('a'));
}