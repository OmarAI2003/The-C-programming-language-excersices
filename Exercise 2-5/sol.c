#include <stdio.h>

int any(char s1[], char s2[]){
    int i, j, k = 0;
    for (i = 0; s2[i] != '\0'; i++) {
        for (j = 0; s1[j] != '\0'; j++) {
            if (s1[i] == s2[j])
        return j;
    }
    }
    return -1;

}

int main() {
    char s1[] = "hello world";
    char s2[] = "ooooh";
    any(s1, s2);
    printf("The first occurrence of any character from '%s' in '%s' is at index: %d\n", s2, s1, any(s1, s2));
    return 0;
}