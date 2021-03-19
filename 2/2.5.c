#include <stdio.h>

int any(char s1[], char s2[]);

main() {
    printf("%d\n", any("abcdefg", "zek"));
    printf("%d\n", any("abc", "zek"));
}

/* get first location in s1 where any char from s2 occurs */
int any(char s1[], char s2[]) {
    for (int i = 0; s1[i] != '\0'; i++) {       
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}
