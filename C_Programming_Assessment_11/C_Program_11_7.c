#include <stdio.h>
int strcomp(char *s1, char *s2);
int main() {
    char str1[] = "helo";
    char str2[] = "hello";
    if(strcomp(str1, str2))
        printf("SUCCESS");
    else
        printf("FAILURE");
}

int strcomp(char *s1, char *s2) {
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i])
            return 0;
        i++;
    }
    return 1;
}
