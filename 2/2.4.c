#include <stdio.h>

void squeeze(char s1[], char s2[]);

main() {
    char s1[] = "abcdefg";
    char s2[] = "cfg";
    squeeze(s1, s2);
    printf("%s", s1);
}

/* delete all c in s2 from s1 */
void squeeze(char s1[], char s2[]) {
    for (int k = 0; s2[k] != '\0'; k++) {
        char c = s2[k];
        int i, j;
        for (i = j = 0; s1[j] != '\0'; i++) {
            if (s1[i] != c) {
                s1[j] = s1[i];
                j++;
            }
        }
    }
}
