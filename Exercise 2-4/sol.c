#include <stdio.h>
void squeeze(char s1[], char s2[]){
    int i, j,k =0;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s2[j] == s1[i])
                break;
            }
            if (s2[j] == '\0'){
                s1[k++] = s1[i];
        }
    }
    s1[k] = '\0'; // Null-terminate the modified string
}
int main() {
    char s1[] = "hello world";
    char s2[] = "ho";
    squeeze(s1, s2);
    printf("%s\n", s1); // Output should be "ell wrld"

    return 0;
}